#include "global.h"
#include "hall_of_fame.h"
#include "main.h"
#include "palette.h"
#include "overworld.h"
#include "script.h"
#include "script_menu.h"
#include "task.h"

extern void Overworld_PlaySpecialMapMusic(void);
extern bool16 ScrSpecial_CreatePCMenu(void);
extern void ScriptMenu_DisplayPCStartupPrompt(void);

static void ReshowPCMenuAfterHallOfFamePC(void);
static void Task_WaitForPaletteFade(u8);

void AccessHallOfFamePC(void)
{
    SetMainCallback2(CB2_DoHallOfFamePC);
    ScriptContext2_Enable();
}

void ReturnFromHallOfFamePC(void)
{
    SetMainCallback2(CB2_ReturnToField);
    gFieldCallback = ReshowPCMenuAfterHallOfFamePC;
}

static void ReshowPCMenuAfterHallOfFamePC(void)
{
    ScriptContext2_Enable();
    Overworld_PlaySpecialMapMusic();
    ScrSpecial_CreatePCMenu();
    ScriptMenu_DisplayPCStartupPrompt();
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0x10, 0, 0);
    CreateTask(Task_WaitForPaletteFade, 10);
}

static void Task_WaitForPaletteFade(u8 taskId)
{
    if (!gPaletteFade.active)
        DestroyTask(taskId);
}

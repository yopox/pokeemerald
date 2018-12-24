@ balls

Level_2_Ball_1::
    giveitem_std ITEM_NET_BALL, 1, 1
    end

Level_2_Ball_2::
    giveitem_std ITEM_RED_SCARF, 1, 1
    end

Level_1_Ball_1::
    giveitem_std ITEM_HM05_FLASH, 1, 1
    end

Level_1_Ball_2::
    giveitem_std ITEM_TM33_REFLECT, 1, 1
    end

@ warps


Lobby_TeleportScript::
    warpteleport MAP_LEVEL_2, 255, 10, 3
    waitstate
    releaseall
    end

Level_2_Warp::
    lock
    faceplayer
    msgbox Level_WarpMessage, MSGBOX_YESNO
    switch VAR_RESULT
    case 1, Level_2_TeleportScript
    release
    end

Level_2_TeleportScript:
    warpteleport MAP_LEVEL_1, 255, 10, 17
    waitstate
    releaseall
    end

Level_1_Warp::
    lock
    faceplayer
    msgbox Level_WarpMessage, MSGBOX_YESNO
    switch VAR_RESULT
    case 1, Level_1_TeleportScript
    release
    end

Level_1_TeleportScript:
    warpteleport MAP_LEVEL_1, 255, 10, 17
    waitstate
    releaseall
    end

Level_WarpMessage:
    .string "Warp to the next level?$"

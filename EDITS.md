# Edits

A summary of the edits.

## Maps

All added maps are in the group 34.

### Lobby

The starting map is `MAP_LOBBY`, `Lobby`.

### Levels

`MAP_LEVEL_X`, `Level_X` corresponds to the level `X`.

## Wild encounters

`src/data/wild_encounters.h` (line 3243).

The infos are called `gLX_LandMons`, and `gLX_LandMonsInfo` for the level `X`.

## Trainers

`src/data/trainers.h` (line 11971).

The `Y`th trainer of the level `X` is called `TRAINER_LX_Y`. Its script is called `Level_X_TrainerY`.

`src/data/trainer_parties.h` (line 12438).

The parties are called `gTrainerParty_LX_Y`.

`include/constants/flags.h` (line 1505).

The trainer flags are called `FLAG_LX_Y`

`include/constants/opponents.h` (line 860).

Added the trainer names `TRAINER_LX_Y`, and updated the `TRAINERS_COUNT`.
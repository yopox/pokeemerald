# Edits

A summary of the edits.

## Maps

All added maps are in the group 34.

### Lobby

The starting map is `MAP_LOBBY`, `Lobby`.

### Levels

`MAP_LEVEL_X`, `Level_X` corresponds to the level `X`.

## Wild encounters

`src/data/wild_encounters.h` (search for `.mapGroup = MAP_GROUP(LEVEL_1),`).

The infos are called `gLX_LandMons`, and `gLX_LandMonsInfo` for the level `X`. These are stored in `random/wild_encounters.h` and generated automatically.

## Trainers

`src/data/trainers.h` (line 11971).

The `Y`th trainer of the level `X` is called `TRAINER_LX_Y`. Its script is called `Level_X_Trainer_Y`. These aren't generated automatically !

`random/trainers.h` (line 12438).

The parties are called `gTrainerParty_LX_Y` (generated automatically).

`include/constants/flags.h` (line 1505).

The trainer flags are called `FLAG_LX_Y` (generated automatically).

`include/constants/opponents.h` (line 860).

Added the trainer names `TRAINER_LX_Y`, and updated the `TRAINERS_COUNT` (generated automatically).

## Items

`random/scripts.inc` (`@ balls`).

The balls scripts are called `Level_X_Ball_Y`.
The corresponding flags are called `FLAX_LX_BALL_Y`.
They are generated automatically.

Set Ether price to 200P, Master Ball price to 20000P.

## Warps

`random/scripts.inc` (`@ warps`).

The warp scripts are called `Level_X_Warp`.
They are generated automatically.
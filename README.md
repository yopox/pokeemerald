# Usage

`python3 random/main.py ; make`

# Proof of concept

This is a test for a roguelike romhack of pokémon emerald.

## Rules

You can choose a random starter and spend money in the lobby (first map). Then there are 9 levels in a random order with randomized items, wild encounters and trainers. In the level X, all enemies are at level X. The goal is to clear these levels with as little white outs as possible (there is a death counter in the save menu).

# TODO

- [ ] Misc
    - [ ] Change impossible evolutions
    - [ ] Edit starting speech
    - [ ] Edit initial options (text speed, …)
    - [ ] Give running shoes in the lobby
    - [ ] Remove useless items
    - [ ] Display level names ("LEVEL X")
- [x] v0.1
    - [x] Remove truck script
    - [x] Create a map group
    - [x] Change the initial player position
    - [x] Create a lobby
    - [x] Edit the starting shop
    - [x] Edit starter pick script
    - [x] Create two test maps
    - [x] Random wild encounters
    - [x] Random starters
    - [x] 1 random trainer
    - [x] 1 random ball
- [x] v0.2
    - [x] Non constant balls number
    - [x] Automatic flag generation
    - [x] Automatic wild encounters generation
    - [x] 10 levels
    - [x] Edit respawn point
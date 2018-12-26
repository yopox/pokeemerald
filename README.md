# Usage

`python3 random/main.py ; make`

# Fichiers utiles

- `src/data/trainers.h` : Liste des dresseurs
- `src/data/trainer_parties.h` : Liste des équipes des dresseurs
- `data/maps` : Metadata des maps
- `data/layouts` : Mapping
- `data/text/birch_speech.inc` : Texte d'explication au début d'une partie
- `data/event_scripts.s` : Beaucoup de scripts
- `src/data/pokemon/evolution.h` : Évolution des pokémon
- `src/data/items.h` : Liste des objets avec leurs propriétés (prix, …)
- `src/new_game.c` : Script de début de partie

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
- [ ] v0.2
    - [x] Non constant balls number
    - [x] Automatic flag generation
    - [x] Automatic wild encounters generation
    - [ ] 10 levels
    - [x] Edit respawn point
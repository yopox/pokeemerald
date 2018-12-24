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
    - [ ] Changer les évolutions par échange
    - [ ] Changer le dialogue de départ
    - [ ] Changer les options initiales (stereo, texte rapide)
- [ ] v0.1
    - [x] Enlever le script du camion
    - [x] Créer un groupe de maps
    - [x] Changer la position de départ du joueur
    - [x] Créer un lobby
    - [x] Créer la boutique de départ
    - [x] Éditer le script de choix du poké de départ
    - [x] Créer une map de test
    - [ ] Hautes herbes random
    - [ ] Pokémon de départ random
    - [ ] 1 Dresseur random
    - [x] 1 objet random au sol
- [ ] v0.2
    - [ ] Map mart / heal / pc / boss
    - [ ] 100 étages successifs
    - [ ] Panthéon à la fin
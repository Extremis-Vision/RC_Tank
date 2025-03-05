# RC Tank for Mixed Reality Tournament

[English](README.md) | [Français](README.fr.md)

---

## Description du Projet

Le projet consiste à créer un char télécommandé avec des moteurs et des composants électroniques pour participer à un tournoi en réalité mixte. Le char mesure environ 35 cm de long et 15 cm de large et se compose de nombreuses pièces imprimées en 3D. L'objectif principal est de créer une version fonctionnelle d'un char RC pour simuler une bataille avec un autre char dans un environnement de réalité mixte.

## Composants Utilisés

- **4 Moteurs TT (Tourists, DC 3-6V, 200 RPM, rapport 1:48)** (pour le mouvement et la direction du char)
- **Arduino** (pour la gestion du contrôle)
- **ESP32 Cam** (pour les capacités de caméra et de contrôle à distance)
- **Contrôleur de Moteur L298N** (pour contrôler les moteurs)
- **Servomoteur SG90** (pour le contrôle de la tourelle)
- **Moteur Pas à Pas 28BYJ-48** et son contrôleur (pour certains mouvements)

Le char sera contrôlé via l'ESP32 Cam et comportera une tourelle pour gérer les interactions visuelles dans le tournoi.

## Objectifs du Projet

- **Contrôle à Distance** : Le char sera contrôlé via un site web où l'on peut voir ce que la caméra de la tourelle filme. L'objectif est de simuler une bataille dans une arène avec un autre char RC, en utilisant la réalité mixte.
- **Améliorations Futures** : Reproduire une version plus réaliste et miniature du char pour les participations futures au tournoi.

## Dossiers du Projet

- **3D-files** : Contient tous les fichiers nécessaires pour l'impression 3D, y compris les fichiers DXF, STEP et Fusion 360.
- **Firmware** : Ce dossier est actuellement vide mais contiendra bientôt le code pour Arduino et ESP32.
- **Images** : Contient des images montrant l'apparence et l'assemblage du char.

## À Faire
- [X] **Fichier 3D pour la tourelle** : sachant que la modélisation de la tourelle du char est terminée et fonctionnelle cette fois-ci.
- [ ] **Fichier 3D pour le reste du char** : Maintenant que la tourelle est fonctionnelle, modéliser le reste du char.
- [ ] **Système de Contrôle** : Développer un système de contrôle complet pour gérer le char à distance.
- [ ] **Réalité Mixte** : Intégrer un système de réalité mixte pour simuler une bataille dans l'arène avec un autre char.
- [ ] **Version du Code** : Créer une version du code pour ESP32 et Arduino afin de contrôler le char via le site web.
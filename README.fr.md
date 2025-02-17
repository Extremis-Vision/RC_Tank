# Char RC pour Tournoi de Réalité Mixte

## Description du projet

Le projet consiste à créer un char télécommandé avec des moteurs et des composants électroniques pour participer à un tournoi de réalité mixte. Le char mesure environ 35 cm de longueur pour 15 cm de largeur et se compose de nombreuses pièces imprimées en 3D. L'objectif principal est de créer une version fonctionnelle d'un char RC pour simuler une bataille avec un autre char dans un environnement de réalité mixte.

## Composants utilisés

- **4 moteurs TT (Tourists, DC 3-6V, 200 tr/min, rapport 1:48)** (pour mouvement et direction du char)
- **Arduino** (pour la gestion du contrôle)
- **ESP32 Cam** (pour la caméra et les fonctionnalités de contrôle à distance)
- **Contrôleur L298N** (pour contrôler les moteurs)
- **SG90 Servo Moteur** (pour la tourelle du char)
- **Moteur Pas-à-Pas 28BYJ-48** et son contrôleur (pour certains mouvements)

Le char sera contrôlé via l'ESP32 Cam et sera équipé d'une tourelle pour gérer les interactions visuelles dans le tournoi.

## Objectifs du projet

- **Contrôle à distance** : Le char sera contrôlé à travers un site web où l'on pourra voir ce que voit la caméra située dans la tourelle. L'objectif est de pouvoir simuler une bataille dans une arène avec un autre char RC, en utilisant la réalité mixte.
- **Améliorations futures** : Reproduire une version plus réaliste et miniature du char pour une participation future au tournoi.

## Dossiers du projet

- **3D-files** : Contient tous les fichiers nécessaires pour l'impression 3D, incluant des fichiers DXF, STEP, et Fusion 360.
- **Firmware** : Ce dossier est actuellement vide, mais contiendra bientôt le code pour l'Arduino et l'ESP32.
- **Images** : Contient des images montrant l'apparence du char et son assemblage.

## À faire

- [ ] **Système de contrôle** : Développer un système de contrôle complet pour gérer le char à distance.
- [ ] **Réalité mixte** : Intégrer un système de réalité mixte pour simuler une bataille dans l'arène avec un autre char.
- [ ] **Version du code** : Créer une version du code pour l'ESP32 et l'Arduino pour le contrôle du char via le site.

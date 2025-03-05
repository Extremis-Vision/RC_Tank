#include <Stepper.h>

// Définissez le nombre de pas par tour pour votre moteur
const int stepsPerRevolution = 2048;

// Créez un objet Stepper pour contrôler le moteur
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Initialisez la communication série
  Serial.begin(9600);

  // Définissez la vitesse du moteur (en tours par minute)
  myStepper.setSpeed(15);

  // Affichez un message de démarrage
  Serial.println("Envoyez un angle en degres precede de '-' pour le sens antihoraire ou sans signe pour le sens horaire :");
}

void loop() {
  // Vérifiez si des données sont disponibles sur le moniteur série
  if (Serial.available() > 0) {
    // Lisez la commande envoyée via le moniteur série
    String command = Serial.readStringUntil('\n');
    command.trim();

    // Convertissez la commande en entier
    int angle = command.toInt();

    // Vérifiez si la commande contient un signe '-' pour le sens antihoraire
    if (command.startsWith("-")) {
      angle = -angle;
    }

    // Calculez le nombre de pas en fonction de l'angle
    int steps = map(angle, -360, 360, -stepsPerRevolution, stepsPerRevolution);

    // Faites tourner le moteur du nombre de pas calculé
    myStepper.step(steps);

    // Affichez l'angle cible dans le moniteur série
    Serial.print("Moteur positionne a : ");
    Serial.println(angle);
  }
}

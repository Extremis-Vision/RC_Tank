#include <Servo.h>

// Créez un objet Servo pour contrôler le servo moteur
Servo myservo;

void setup() {
  // Initialisez la communication série
  Serial.begin(9600);

  // Attachez le servo moteur à la broche 9
  myservo.attach(9);

  // Affichez un message de démarrage
  Serial.println("Envoyez un angle entre 0 et 180 degres :");
}

void loop() {
  // Vérifiez si des données sont disponibles sur le moniteur série
  if (Serial.available() > 0) {
    // Lisez l'angle envoyé via le moniteur série
    int targetAngle = Serial.parseInt();

    // Vérifiez que l'angle est dans la plage valide
    if (targetAngle >= 0 && targetAngle <= 180) {
      // Faites tourner le servo moteur à l'angle cible
      myservo.write(targetAngle);

      // Affichez l'angle cible dans le moniteur série
      Serial.print("Servo positionne a : ");
      Serial.println(targetAngle);
    } else {
      // Affichez un message d'erreur si l'angle n'est pas valide
      Serial.println("Angle invalide. Veuillez envoyer un angle entre 0 et 180 degres.");
    }
  }
}

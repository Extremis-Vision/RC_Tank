# RC Tank for Mixed Reality Tournament

[English](README.md) | [Français](README.fr.md)

---

## Project Description

The project involves creating a remote-controlled tank with motors and electronic components to participate in a mixed reality tournament. The tank is approximately 35 cm long and 15 cm wide and consists of many 3D-printed parts. The main goal is to create a functional version of an RC tank to simulate a battle with another tank in a mixed reality environment.

## Components Used

- **4 TT Motors (Tourists, DC 3-6V, 200 RPM, 1:48 ratio)** (for tank movement and direction)
- **Arduino** (for control management)
- **ESP32 Cam** (for camera and remote control capabilities)
- **L298N Motor Controller** (to control the motors)
- **SG90 Servo Motor** (for turret control)
- **28BYJ-48 Stepper Motor** and its controller (for certain movements)

The tank will be controlled via the ESP32 Cam and will feature a turret to manage the visual interactions in the tournament.

## Project Goals

- **Remote Control**: The tank will be controlled through a website where you can see what the turret camera is viewing. The goal is to simulate a battle in an arena with another RC tank, using mixed reality.
- **Future Improvements**: Reproduce a more realistic and miniature version of the tank for future tournament participation.

## Project Folders

- **3D-files**: Contains all the necessary files for 3D printing, including DXF, STEP, and Fusion 360 files.
- **Firmware**: This folder is currently empty but will soon contain the code for Arduino and ESP32.
- **Images**: Contains images showing the tank’s appearance and assembly.

## To Do
- [X] **3D file for touret**: knowing that the turret modeling of the tank is completed and functional this time.
- [ ] **3D file for the rest of the tank**: Now that the turret is functional, model the rest of the tank.
- [ ] **Control System**: Develop a complete control system to manage the tank remotely.
- [ ] **Mixed Reality**: Integrate a mixed reality system to simulate a battle in the arena with another tank.
- [ ] **Code Version**: Create a version of the code for both ESP32 and Arduino to control the tank via the website.

# Servo Motor Control with Potentiometer (Arduino)

This project demonstrates how to control a servo motor using a potentiometer connected to an Arduino.
By rotating the potentiometer, the servo angle changes smoothly between 0° and 180°.

---

## Folder Structure
ServoMotorControl_Potentiometer/
│── src/
│   └── pot_servo.ino   
│── video/
│   └── actual_video.mp4         
│── README.md               
│── LICENSE         
        
---

## Components Used

 - 1 × Arduino Uno (or compatible board)
 - 1 × Servo Motor (SG90 or similar)
 - 1 × Potentiometer (10kΩ recommended)
 - 1 × Breadboard
 - Jumper Wires

---

## How It Works

 - The potentiometer provides an analog input (0–1023) to the Arduino.
 - The Arduino reads the value and maps it to an angle range (0–180°).
 - The mapped value is sent to the servo motor, which rotates accordingly.
 - As you turn the potentiometer knob, the servo rotates in real time.

---

## License

This project is licensed under the MIT License.
You are free to use, modify, and distribute this project with attribution.

---

## Author

Catherine Bugarin

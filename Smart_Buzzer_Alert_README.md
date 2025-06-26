
# Smart Buzzer Alert System with Ultrasonic Sensor and LDR

## 📌 Objective

This project is designed to enhance environmental awareness and safety by using an ultrasonic sensor to measure distances and an LDR (Light Dependent Resistor) to detect ambient light. Based on sensor input, a buzzer emits warning tones at varying frequencies to signal proximity or low light conditions.

---

## ⚙️ Features

- **Distance Detection:** Uses an ultrasonic sensor (HC-SR04) to detect objects within 50 cm.
- **Light Sensitivity:** Uses an LDR to detect light intensity; triggers an alarm in darkness.
- **Auditory Feedback:** Buzzer changes tone based on proximity or dark conditions.
- **Real-time Monitoring:** Sensor values are read and processed continuously via Arduino loop.

---

## 🔧 Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- LDR (Light Dependent Resistor)
- Buzzer
- Resistors
- Jumper Wires
- Breadboard
- Power Supply or USB

---

## 🖥️ Code Overview

- **Distance Thresholds:**
  - <50 cm = alert zone
  - Between 35-50 cm = low-frequency tone
  - Between 25-35 cm = medium tone
  - Between 15-25 cm = high tone
  - <15 cm = highest tone
- **Light Detection:**
  - If the light intensity (from LDR) is below a threshold (350), a long tone is triggered.

### Main Functions:
- `ReadDistance()` — Measures and returns distance using ultrasonic sensor.
- `loop()` — Reads sensor data, makes decisions, and activates the buzzer accordingly.

---

## 🧪 How It Works

1. The ultrasonic sensor continuously measures the distance to the nearest object.
2. The buzzer emits a tone corresponding to how close the object is.
3. Simultaneously, the LDR checks light levels:
   - If it’s too dark (sensor value < threshold), a high alert tone is triggered.
4. All operations are looped every 400ms.

---

## 👤 Team Members

- Sarah Sameh Mohamed  
- Lyan Ahmed Mohsen  
- Mariam Sherif Mohamed  
- Ahmed Wael Ahmed Naem  
- Ahmed Wael Shenif  

---

## 👨‍🏫 Supervisor

- Eng. Muhammed Mostafa

---

## 📂 Project Files

- `buzzer_alert.ino` – Arduino sketch
- `README.md` – This documentation

> 💡 You can modify `THRESHOLD` or tone frequencies to calibrate sensitivity or response levels.

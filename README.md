# DigiSparkMouseJigglerTV

## Introduction
**DigiSparkMouseJigglerTV** is a DIY (Do-It-Yourself) project that utilizes a DIGISPARK USB device to create a mouse jiggler, primarily for TVs and other similar devices. The main feature of this jiggler is its ability to hide the mouse cursor and prevent the activation of screensavers, ensuring uninterrupted viewing or usage.

## Getting Started

### Prerequisites
Before you begin, ensure that you have the Arduino IDE installed on your computer. This software is essential for programming the Digispark device.

### Installation Steps

1. **Add the Digistump Board Manager URL:**
   - In the Arduino IDE, navigate to `File` -> `Preferences` -> `Settings`.
   - Add the following URL to the 'Additional Boards Manager URLs': 
     ```
     https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json
     ```
   ![Step 1](https://github.com/infimiIT/DigiSparkMouseJigglerTV/assets/62514741/cd49216c-39bd-4b6c-9484-e64d6b311a38)


2. **Open the Boards Manager:**
   - Go to `Tools` -> `Board...` -> `Boards Manager`.
   ![Step 2](https://github.com/infimiIT/DigiSparkMouseJigglerTV/assets/62514741/d97240aa-3779-4355-ae78-2c1d2872d132)


3. **Install Digistump AVR Boards:**
   - In the Boards Manager, search for and install "Digistump AVR Boards".
     
   ![Step 3](https://github.com/infimiIT/DigiSparkMouseJigglerTV/assets/62514741/deeea03d-e813-4e4e-b90b-47263e1200c9)


4. **Set up the Board:**
   - Select `Digispark (Default - 16.5MHz)` as your board.
   - Other settings should load automatically. If not, refer to the settings shown below.
   ![Board Settings](https://github.com/infimiIT/DigiSparkMouseJigglerTV/assets/62514741/6ab6f647-45cd-49d1-8281-d30bb36a2711)


5. **Write and Upload the Code:**
   - Use the provided script to program your Digispark device.
   ```cpp
   #include <DigiMouse.h>

   void setup() {
     DigiMouse.begin();
   }
   
   void loop() {
     while(true) {
       DigiMouse.move(100, 0, 0); // Move 2px right
       DigiMouse.delay(10000);    // Delay for 10 seconds
     }
   }



##  License and Usage
Feel free to use and modify this code for your personal projects. Please ensure that you comply with all warranty and license terms of your hardware.

## Credits
Project created by Przemysław Myk
GitHub: infimiIT

# Alexa-VoiceSwitch
An accessible voice activated switch using a HUZZAH32 – ESP32 Feather Board and an Amazon Echo

# Setup Instructions

  1. Setup an Adafruit IO account according to the following instructions:

  1.1. Create an Adafruit IO account
  
  1.2. Create an AIO KEY 
  
  1.3. Copy your Adafruit IO key for later use in the code
  
  1.4. Create an Adafruit IO feed with name of your switch. I used feed name “Wheelchair” as an example.


2.	Setup your HUZZAH32 – ESP32 Feather Board

  2.1. Download ESP32 library for Arduino IDE and install it according to the following instruction: https://learn.adafruit.com/adafruit-huzzah32-esp32-feather/using-with-arduino-ide

3.	Setup IFTTT account

  2.1. Create an IFTTT account at https://ifttt.com
  
4.	Create switch on recipe

  4.1. Click on the “New applet” button to create a recipe 
  
  4.2. Click on the blue this block and select “Amazon Alexa” as a service 
  
  4.3. Click on “Say a specific phrase” to turn on your switch
  
  4.4. Enter the method phrase to activate the switch. I used phrase “Wheelchair on” as an example 
  
  4.5. Click on the blue that block and select “Adafruit” as the action service 
  
  4.6. Select “Send data to Adafruit IO” block
  
  4.7. Enter “on” as the Data to save
  
  4.8. Click on “Finish” button 
  
5.	Create switch off recipe

  5.1. Click on the “New applet” button to create a recipe 
  
  5.2. Click on the blue this block and select “Amazon Alexa” as a service 
  
  5.3. Click on “Say a specific phrase” to turn off your switch
  
  5.4. Enter the method phrase to activate the switch. I used phrase “Wheelchair off” as an example 
  
  5.5. Click on the blue that block and select “Adafruit” as the action service 
  
  5.6. Select “Send data to Adafruit IO” block
  
  5.7. Enter “off” as the Data to save
  
  5.8. Click on “Finish” button 
  
6.	Setup the Alexa-VoiceSwitch.ino code

  6.1. Make a copy of your IO_USERNAME and IO_KEY from Adafruit IO account and paste them in the config.h file

  6.2. Replace "your_ssid" with your WiFi's SSID and "your_pass" with your WiFi's password in the config.h file

  6.3. Verify and upload Alexa-VoiceSwitch.ino code to your HUZZAH32 – ESP32 Feather Board

7.	Make sure the feed data status and status of your device match. You can manually set it to on/off to match it.

8.	Create a cable with a mono 3.5mm male jack on one end and 2 pin headers on the other side

  8.1. Connect the signal jumper to the pin number 13 on HUZZAH32 and the other one to the GND pin 

#include <Arduino.h>
//This example code is in the Public Domain (or CC0 licensed, at your option.)
//By Evandro Copercini - 2018
//
//This example creates a bridge between Serial and Classical Bluetooth (SPP)
//and also demonstrate that SerialBT have the same functionalities of a normal Serial

#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;

int recived;
char recivedChar;

const char turnON = 'a';  //led
const char turnOFF = 'b'; //led
const char M_turnON = 'c';  //motor
const char M_turnOFF = 'd'; //motor

const int LEDpin_13 = 13; //led
const int LEDpin_34 = 27; //motor


void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  Serial.println("To turn ON send: a");
  Serial.println("To turn ON send: b");
  pinMode(LEDpin_13,OUTPUT);
  pinMode(LEDpin_34,OUTPUT);
}

void loop() {
  recivedChar = (char) SerialBT.read();
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    SerialBT.print("Received:");  //write on BT_app
    SerialBT.println(recivedChar);  //write on BT_app
    Serial.print("Received:");      //print on serial monitor
    Serial.println(recivedChar);  //print on serial monitor

    //Serial.write(SerialBT.read());  
    if (recivedChar == turnON){
      SerialBT.println("LED ON:");    //write on BT app
      Serial.println("LED ON:");      //Write on serial monitor
      digitalWrite(LEDpin_13, HIGH);     //turn on LED ON
      }  
    if (recivedChar == turnOFF){
      SerialBT.println("Motor OFF:");    //write on BT app
      Serial.println("Motor OFF:");      //Write on serial monitor
      digitalWrite(LEDpin_13, LOW);     //turn on LED ON
      }
      //////////////   motor contol   /////////////////
      if (recivedChar == M_turnON){
      SerialBT.println("Motor ON:");    //write on BT app
      Serial.println("Motor ON:");      //Write on serial monitor
      digitalWrite(LEDpin_34, HIGH);     //turn on LED ON
      }
    if (recivedChar == M_turnOFF){
      SerialBT.println("Motor OFF:");    //write on BT app
      Serial.println("Motor OFF:");      //Write on serial monitor
      digitalWrite(LEDpin_34, LOW);     //turn on LED ON
      }
  }
  delay(20);
}

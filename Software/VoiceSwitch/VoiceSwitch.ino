/////////////////////////////////////////////////////////
//
//VoiceSwitch.ino
//
//https://github.com/milador/VoiceSwitch
//
/////////////////////////////////////////////////////////

#include "config.h"

AdafruitIO_Feed *counter = io.feed(FEED_NAME);

//bool current = false;
//bool last = false;

int switch_pin = A1;
int reaction_delay = 50;

void setup()
{
  // start the serial connection
  Serial.begin(115200);
  pinMode(switch_pin, OUTPUT);
  digitalWrite(switch_pin, LOW); 
  // wait for serial monitor to open
  while (!Serial);
  Serial.print("Connecting to Adafruit IO");

  // connect to io.adafruit.com
  io.connect();

  // set up a message handler for the count feed.
  // the handleMessage function will be called whenever a message is received from adafruit io.
  counter->onMessage(handleMessage);

  // wait for a connection
  while (io.status() < AIO_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }

  // we are connected
  Serial.println();
  Serial.println(io.statusText());

}

void loop()
{
  // io.run() keeps the client connected to
  // io.adafruit.com, and processes any incoming data.
  io.run();
}

// handleMessage function is called whenever a 'counter' message is received from Adafruit IO.
void handleMessage(AdafruitIO_Data *data)
{
  String s = data->value();
  Serial.print("received <- ");
  Serial.println(s);
  
  //changing state of current variable based on value of feed 
  if (s == "switch")
  {
    digitalWrite(switch_pin, HIGH);
    delay(reaction_delay);
    digitalWrite(switch_pin, LOW);
  }


}

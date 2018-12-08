/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "Your Adafruit IO Username"
#define IO_KEY         "Your Adafruit IO key"

/******************************* WIFI **************************************/

#define WIFI_SSID       "Your WIFI_SSID"
#define WIFI_PASS       "Your WIFI_PASS"

// comment out the following two lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

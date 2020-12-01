
#define SKETCH_VERSION "0.1"

//#define MY_DEBUG
//#define MY_DEBUG_VERBOSE_RFM69
//#define MY_DEBUG_VERBOSE_GATEWAY
#if F_CPU == 8000000L
#define MY_BAUD_RATE 38400
#endif

#define MY_RADIO_RFM69
#define MY_RFM69_FREQUENCY RFM69_433MHZ
//#define MY_RFM69_NEW_DRIVER
#define MY_RFM69_TX_POWER_DBM 13
//#define MY_RFM69_ENABLE_ENCRYPTION
//#define MY_ENCRYPTION_SIMPLE_PASSWD "xxxxxxxx"
//#define MY_TRANSPORT_WAIT_READY_MS 10000
#define MY_RFM69_NETWORKID 100
#define MY_NODE_ID 254

#define MY_MAC_ADDRESS 0xDE, 0xAD, 0xBE, 0xEF, 0x01, 0x01
#define MY_IP_ADDRESS 192,168,0,248
//#define MY_IP_RENEWAL_INTERVAL 60000
#define MY_IP_GATEWAY_ADDRESS 192,168,0,254
#define MY_IP_SUBNET_ADDRESS 255,255,255,0

#define MY_GATEWAY_MQTT_CLIENT
#define MY_MQTT_PUBLISH_TOPIC_PREFIX "home/f0/mysgw-pub"
#define MY_MQTT_SUBSCRIBE_TOPIC_PREFIX "home/f0/mysgw-sub"
#define MY_MQTT_CLIENT_ID "mys-gw-f0"
#define MY_CONTROLLER_IP_ADDRESS 192,168,0,249
#define MY_PORT 1883
//#define MY_MQTT_USER "mqttuser"
//#define MY_MQTT_PASSWORD "mqttpass"

#define MY_NODE_ID 254
//#define MY_INCLUSION_MODE_FEATURE
//#define MY_INCLUSION_BUTTON_FEATURE
//#define MY_INCLUSION_BUTTON_EXTERNAL_PULLUP
//#define MY_INCLUSION_MODE_DURATION 60
//#define MY_INCLUSION_MODE_BUTTON_PIN  3

#define MY_DEFAULT_LED_BLINK_PERIOD 300
//#define MY_WITH_LEDS_BLINKING_INVERSE
//#define MY_DEFAULT_ERR_LED_PIN 4  // Error led pin
//#define MY_DEFAULT_RX_LED_PIN  6  // Receive led pin
//#define MY_DEFAULT_TX_LED_PIN  5  // the PCB, on board LED

#include <Ethernet.h>
#include <MySensors.h>
//#include <SD.h>
//#include <drivers/ATSHA204/ATSHA204.cpp>

//Sd2Card card;

//#define EEPROM_VERIFICATION_ADDRESS 0x01

//static uint8_t num_of_leds = 5;
//static uint8_t leds[] = {LED_BLUE, LED_RED, LED_GREEN, LED_YELLOW, LED_ORANGE};

void setup() {
}

void presentation() {
}

void loop() {
}

# MQTT Gateway for MySensors Nodes

## Project description
This is a project to connect MySensors RFM69W radio nodes (sensors & actuators) with an MQTT broker to manage them or collect metrics.
For the gateway device I use Sensebender-GW board, RFM69W radio and ethernet W5100 module.

## MySensors Infrastructure scheme
![Home Infrastructure Diagram](https://raw.githubusercontent.com/ehrnjic/mys-eth-mqtt-gw/main/doc/mys-infrastructure.png)

## MQTT
Because I use a lot of different type of things through other home automation projects, I decided it was most appropriate to use an MQTT broker to communicate with all of them.

I'm running official (https://hub.docker.com/_/eclipse-mosquitto) eclipse-mosquitto MQTT broker as a container on Docker. Eclipse Mosquitto is an open source and lightweight implementation of a server for versions 5, 3.1.1, and 3.1 of the MQTT protocol. To communication with broker MYS-ETH-GW use MQTT client from MySensors library (MY_GATEWAY_MQTT_CLIENT).

### MySensors MQTT topics explanation
MQTT topics from which messages come or go to a certain node is formed in the same way as with the serial API.

From nodes: `MY_MQTT_PUBLISH_TOPIC_PREFIX` / `node_id` / `child_sensor_id` / `command` / `ack` / `type`</br>
To nodes: `MY_MQTT_SUBSCRIBE_TOPIC_PREFIX` / `node_id` / `child_sensor_id` / `command` / `ack` / `type`
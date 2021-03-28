# MQTT 
![Mq](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/MQTT.png)

MQTT stands for Message Queuing Telemetry Transport.It is a lightweight publish and subscribe system where you can publish and receive messages as a client.
MQTT is a simple messaging protocol, designed for constrained devices with low-bandwidth. So, it’s the perfect solution for Internet of Things applications. 
MQTT allows you to send commands to control outputs, read and publish data from sensor nodes and much more.

![lo](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/publish-and-subscribe.jpg)

# MQTT Basic Concepts

- [**Publish/Subscribe**](#publishsubscribe)
- [**Messages**](#messages)
- [**Topics**](#topics)
- [**Broker**](#broker)


## Publish/Subscribe

The first concept is the publish and subscribe system. In a publish and subscribe system, a device can publish a message on a topic,
or it can be subscribed to a particular topic to receive messages

![lo](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/publish-subscribe.png)


## Messages

Messages are the information that you want to exchange between your devices. Whether it’s a command or data.

![lo](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/Structure-of-an-MQTT-message.png)

## Topics

Topics are the way you register interest for incoming messages or how you specify where you want to publish the message.
Topics are represented with strings separated by a forward slash. Each forward slash indicates a topic level. 
Here’s an example on how you would create a topic for a lamp in your home office

![lo](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/5mqtt-topics.jpg)

**Note**: - topics are case-sensitive.

![lo](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/publish-subscribe-example.png)


## Broker

The broker is primarily responsible for receiving all messages, filtering the messages,
decide who is interested in them and then publishing the message to all subscribed clients.

![lo](https://github.com/xavierallem/IOT-Cloud/blob/master/assignments/Assets/mqtt_broker.png)

There are several brokers you can use such as  [Mosquitto broker ](https://mosquitto.org/).




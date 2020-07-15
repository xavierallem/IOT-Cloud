# Problem 1

### Goal : Send data read form the device (in module 3) to AWS and InfluxDB and write a JSON file parser for parsing User settings 

#### Outcomes 
1. Code which parses the JSON file which contains settings defined by the user

Sample JSON file:

```json
{
    "device_attributes": {
        "name": "smart meter",
        "serial": "123456789",
        "debug_log": "/var/meter.log"
    },
    "settings": {
        "influxdb": {
            "db_url": "http:148.251.91.253:9600",
            "db_name": "electricMeter"
        },
        "aws": {
            "hostURL": "AWS",
            "port": "8886",
            "certDir": "/home/shunya/.cert/aws/",
            "rootCA": "rootCA.cert",
            "certName": "client.cert",
            "privKey": "client.key",
            "clientID": "smartMeter",
            "QOS": 0
        },
        "modbus": {
            "device": "/dev/ttyAMA0",
            "baud": "9600"
        }
    }
}
```

2. Take this settings and then send the data read from the device to AWS and InfluxDB


### Steps to complete

- Improve on the code that you have written in the previous modules. 
- Write code for parsing JSON and putting it to the settings structure.
- Write code for sending the data to AWS and InfluxDB

### Acceptance Criteria 
This is the criteria to accept the assignment.
- **Must** follow the Coding Standards.
- Documentation should be provided for the code.
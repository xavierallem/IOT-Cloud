# Problem 2

### Goal: Implement communication to Google IoT cloud using the google IoT embedded C SDK

### Expected outcome
Write code using the Google IoT Cloud device SDK for embedded C to achieve these goals. 

1. User should be able to Set Authentication for Google IoT device (i.e certificate type and certificate location) via cmdline
2. User should be able to Set MQTT Endpoint URL & Port Number via cmdline. 
3. Send messages to user-chosen MQTT topics (Publish)
4. Choose to read messages from user-selected MQTT topics (Subscribe) 
5. Read messages from selected MQTT Topics in real-time. 
6. Simplified document for Compiling the SDK and linking it with your program

## Steps to complete

1. Study the [Google IoT Cloud device SDK for embedded C](https://github.com/GoogleCloudPlatform/iot-device-sdk-embedded-c) and document the API's.
2. Write code using the Google IoT Cloud device SDK for embedded C to [given goals](#expected-outcome).

#### Testing Note:
Unless you have the Google IoT Account(requires Credit Card) for testing the code, 
I suggest that you do not test the working of the code, rather test the code for compilation. 

If you can find any other means to test the code then you are welcome to suggest 
the testing method in the Issues.

### Acceptance Criteria 
Check if your submission fulfills the criteria before submission

1. All the above set Goals must be achieved for the completion of the Task
2. The code must be written in embedded C and not it the any other language.
3. The code must be documented using the C Coding style. 
4. The code must be tested for compilation on Shunya OS docker container. 

(Use this document for [Shunya OS docker](https://gitlab.iotiot.in/snippets/52))
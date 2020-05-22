# Step-1 : Authenticate Device

### Goal : Set up X.509 Authentication for Azure IoT device

### Description

Use the Provisioning Client API of Azure IoT SDK for C to provision a device with the Azure Device Provisioning Service using X.509 authentication and a simulated self-signed X.509 certificate.

Use the following links for reference-
* [Microsoft DPS Tutorial](https://docs.microsoft.com/en-us/azure/iot-dps/quick-create-simulated-device-x509) - For the details of full process
* [Provision Client SDK Documentation](https://github.com/Azure/azure-iot-sdk-c/blob/master/provisioning_client/devdoc/using_provisioning_client.md) - For SDK related implementation steps

Sample to refer-
* [Threaded API](https://github.com/Azure/azure-iot-sdk-c/tree/master/provisioning_client/samples/prov_dev_client_sample)
* [Low-Level API](https://github.com/Azure/azure-iot-sdk-c/tree/master/provisioning_client/samples/prov_dev_client_ll_sample)

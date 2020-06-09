# Problem 2

### Goal : Implement a full-duplex communication using a CoAP protocol. 

### Description
You guys have to implement 
- CoAP server 
- CoAP client 

#### Implementation goals for the server 
1. Read these values from your laptop 
    * RAM
    * CPU clock Speed 
    * CPU temperature
2. And add the above parameters as resource in the server.
3. Update the data for these resources every 100 ms. 

The goal is to make a coap server that has RAM, CPU clock speed and CPU temperature as data points 
which are exposed to any coap client.

#### Implementation goals for the client 
1. Read these values from the above coap server
    * RAM
    * CPU clock Speed 
    * CPU temperature
2. And print the values on `stdout`.
3. Print the data for these resources every 50 ms. 

The goal is to make a coap client that can read RAM, CPU clock speed and CPU temperature 
from the coap server.


- You must use given CoAP Client libraries to make your CoAP client.
    - C library - https://github.com/obgm/libcoap

- See examples to get a quick understanding of the Client and server code -https://github.com/obgm/libcoap-minimal

- For this you may have to install libcoap library on your laptop.
    - Installation of libcoap - https://libcoap.net/install.html 
    - libcoap documentation - https://libcoap.net/

### Acceptance Criteria 
This is the criteria to accept the assignment.
- **Must** have documentation for setting up CoAP server and CoAP Client.
- **Must** follow the Coding Standards.
- You must show the proof of the communication working, here use your own creativity to show proof, it can be images, videos, etc... 
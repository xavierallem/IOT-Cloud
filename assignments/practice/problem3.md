# Problem 3

### Purpose : Write code for reading data from the LNT HTCT ER300P 3430 using Shunya Interfaces API's

## Outcomes 
C code that reads the given data from the device over Modbus
1. AC current 
1. Voltage 
1. Power
1. Active energy (kWhr), 
1. Reactive energy (kVArhr) 
1. Apparent energy (kVAhr) 
1. THD of voltage

### Steps for completion
1. Go through the product breif - https://corpwebstorage.blob.core.windows.net/media/39369/three-phase-htct-meter-er300p.pdf
1. Find the Datasheet for the product (data sheet will contain full details of the product)
1. Find the Modbus addresses for the parameters that needs to be read from the data sheet.
1. Write code to read the above data from the meter using Modbus using Shunya Interfaces IIOT API's.
    - For Meter connections using RS485 assume that the meter will be connected to uart device node `/dev/ttyAMA0`
1. Write code to Store the data into Time series Database in InfluxDB.
    - For InfluxDB assume its URL to be `http://148.251.91.245` and port `8600`
1. Write Shunya `config.json` file.


### Acceptance Criteria 
This is the criteria to accept the assignment.
- The code must be divided into functions 
- **Must** have documentation for using the program.
- Code **Must** follow the Coding Standards.
- Code must be in C.
- Code must be compiled in the Shunya OS docker container.

#### Note: Documentation of the whole program is a must criteria for the completion of the Assignment.

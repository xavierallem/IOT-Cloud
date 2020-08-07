# Problem 2

### Purpose : Write code for reading data from ADC connected to RPI using Shunya Interfaces API's

## Outcomes 
C code that 
1. Reads the analog data from the ADC 
1. Sends it to InfluxDB
1. Stored in a JSON file with UNIX Timestamp

### Steps for completion
1. Write code for reading data from the ADC
   - Use Shunya Interfaces simple API for reading data form the ADC
1. Write code to Store the data into Time series Database in InfluxDB.
    - For InfluxDB assume its URL to be `http://148.251.91.245` and port `8600`
1. Write code to store data into a JSON file.
1. Write Shunya `config.json` file.


### Acceptance Criteria 
This is the criteria to accept the assignment.
- The code must be divided into functions 
- **Must** have documentation for using the program.
- Code **Must** follow the Coding Standards.
- Code must be in C.
- Code must be compiled in the Shunya OS docker container.

#### Note: Documentation of the whole program is a must criteria for the completion of the Assignment.

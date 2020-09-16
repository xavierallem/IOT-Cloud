# Problem 1

### Purpose : Send data from embedded device to IFTT platform using webhooks (HTTP requests)

Write code using the libcurl library to send events (data) from embedded device to IFTT platform using webhooks (HTTP requests)

#### Outcomes 
1. C/CPP `iftt.cxx` code which contains functions that can be used to send data to the IFTT platform.
2. C/CPP `iftt_examples.cxx` code which contains main function that uses the functions from the `iftt.cxx` file
3. Document on how to use the functions from `iftt.cxx` file.


### Steps to complete

1. Go through the reading material for sending data through Webhooks to IFTT. 
    - https://thepihut.com/blogs/raspberry-pi-tutorials/using-ifttt-with-the-raspberry-pi    (understand the logic of sending data to the IFTT platform)
2. Go through the reading matrial for the libcurl library 
    - libcurl API - https://curl.haxx.se/libcurl/c/
    - Various example codes using libcurl - https://curl.haxx.se/libcurl/c/example.html
3. Write code to send event data as JSON in http request. 

### Acceptance Criteria 
This is the criteria to accept the assignment.
- **Must** follow the Coding Standards.
- The code **Must** use the cURL library. 
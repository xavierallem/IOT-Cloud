/** @file iftt_example.c
*  @brief  
*  
* Sends data to ifttt platform
*  
*  @author Allen Xavier
*  @bug None yet  
*/

/*
*#####################################################################
*  Initialization block
*  ---------------------
*  This block contains initialization code for this particular file.
*  It typically contains Includes, constants or global variables used
*  throughout the file.
*#####################################################################
*/

/* --- Standard Includes --- */
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/* RapidJSON Includes */

#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>


/* --- Project Includes --- */
#include <curl/curl.h
#include "iftt.h"

/*
*#####################################################################
*  Process block
*  -------------
*  Solve all your problems here 
*#####################################################################
*/
using namespace rapidjson;

/**
 *  @brief Description on main
 *
 *  Connects , creates json doc
 * and publishes data to ifttt
 *
 *  @return 
 */

int main(){
	/* Variable to store auth key*/
	chat auth[50];
	printf("Enter TheIFTTT Auth key \n");
	/* Take input of auth key */
	scanf("%[^\n]%*c", auth); 
	/*Json file to be parsed*/
	const char* json = "{\"Temperature\":30,\"Humidity\":10}";
	/*Initializing document variable*/
	Document d;
	/*Parsing the json */
	d.Parse(json);
	/*Initializing buffer*/
	StringBuffer buffer;
	/*Wrtier stream-*/
	Writer<StringBuffer> writer(buffer);
	/* Write the JSON document `d` into the buffer`*/
	d.Accept(writer);
	/* Publish the json values and auth */
	POST_IFTTT(buffer.GetString(),auth);
	return 0;
}


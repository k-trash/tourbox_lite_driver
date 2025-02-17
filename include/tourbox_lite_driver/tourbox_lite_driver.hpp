#ifndef __TOURBOX_LITE_DRIVER__
#define __TOURBOX_LITE_DRIVER__

#include "serial_connect/serial_connect.hpp"
#include <iostream>

SerialConnect serial;

void serialCallback(int ret_){
	uint8_t read_buf[10];
	uint8_t read_size;

	read_size = serial.readSerial();
	
	for(uint8_t i=0; i<read_size; i++){
		std::cout << int(serial.recv_data[i]) << '\t';
	}
	std::cout << std::endl;
}

#endif
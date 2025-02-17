#include "tourbox_lite_driver/tourbox_lite_driver.hpp"
#include "serial_connect/serial_connect.hpp"
#include <iostream>

int main(int argc, char *argv[]){
	uint8_t read_buf[10];
	extern SerialConnect serial;

	serial.setSerial("/dev/ttyACM0", B115200, true);

	serial.openSerial();

	serial.setInterrupt(serialCallback);

	while(1);

	serial.closeSerial();

	return 0;
}
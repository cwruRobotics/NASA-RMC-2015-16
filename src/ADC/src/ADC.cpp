#include "ADC.hpp"

#include "I2C.hpp"

#define IO_VOLTAGE (3.3)

namespace Auton {

int ADC::query(float* value, int index) {
        int retval;
	
	retval = Auton::I2C::open();
	if (retval < 0) {return -1;}
	retval = Auton::I2C::setAddress(0x48); // TODO: calculate from index
        if (retval < 0) {return -1;}
        
	char cmd[] = {0b10001100 | ((index << 4) & 0b01110000)}; // 1 pin mode bit, 3 channel select bits, 2 power mode bits, 2 unused
        char buff[2];
        
	retval = Auton::I2C::sendPacket(cmd, 1);
	if (retval < 0) {return -1;}
	retval = Auton::I2C::receivePacket(buff, 2);
	if (retval < 0) {return -1;}

	*value = (buff[0]*256 + buff[1]) * (IO_VOLTAGE / (4096.0));
	
	retval = Auton::I2C::close();
	if (retval < 0) {return -1;}
	return 0;
}

}

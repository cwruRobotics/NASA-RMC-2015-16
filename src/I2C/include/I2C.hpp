#ifndef I2C_HPP_
#define I2C_HPP_

namespace I2C {
void begin();
void writeByte(char value);
void writeBytes(char * data, int length);
void release();
void setSlaveAddress(char address);
void sendCommand(char command, char * data, int len);
}

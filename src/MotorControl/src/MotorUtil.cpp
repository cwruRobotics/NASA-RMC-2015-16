#include "MotorUtil.hpp"

namespace MotorControl {

std::map<char, double> maxDistances = std::map<char, double>();
std::map<char, double> maxSpeeds = std::map<char, double>();

char scaleDistance(char motor, double val) {
	double maxDist = maxDistances.find(motor)->second;
	double scaled = 255*val/maxDist;
	if(scaled > 255) {
		scaled = 255;
	} else if(scaled < 0) {
		scaled = 0;
	}
	return (char)(scaled);
}
char scaleVelocity(char motor, double val) {
	double maxSpeed = maxSpeeds.find(motor)->second;
	double scaled = 255*val/maxSpeed;
	if(scaled > 255) {
		scaled = 255;
	} else if(scaled < 0) {
		scaled = 0;
	}
	return (char)(scaled);
}

} // end of namespace MotorControl

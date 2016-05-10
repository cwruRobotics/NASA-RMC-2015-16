#include "MotorControl/MotorUtil.hpp"

namespace MotorControl {



char scaleVelocity(char motor, double val) {
	return scaleChar(val, maxSpeeds.find(motor)->second,127);
}

char scaleCurrent(char motor, double val) {
	return scaleChar(val, maxCurrents.find(motor)->second,255);
}

double unscaleVelocity(char motor, char val) {
	return ((double)val)*(maxSpeeds.find(motor)->second)/127;
}

double unscaleCurrent(char motor, char val) {
	return ((double)val)*(maxCurrents.find(motor)->second)/255;
}

char scaleChar(double val, double max, char max_c) {
	double scaled = max_c*val/max;
	if(scaled > max_c) {
		scaled = max_c;
	} else if(scaled < 0) {
		scaled = 0;
	}
	return (char)scaled;
}

void initializeMaximums() {
	maxSpeeds.insert(std::pair<char,double>(MOT_FR,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_BR,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_FL,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_BL,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_TRAL,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_TRAR,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_CBUC,2.5));
	maxSpeeds.insert(std::pair<char,double>(MOT_CHOP,2.5));
	maxSpeeds.insert(std::pair<char,double>(ACT_WHEL,2.5));
	maxSpeeds.insert(std::pair<char,double>(ACT_WHER,2.5));
	maxSpeeds.insert(std::pair<char,double>(ACT_ARML,2.5));
	maxSpeeds.insert(std::pair<char,double>(ACT_ARMR,2.5));

	maxCurrents.insert(std::pair<char,double>(MOT_FR,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_BR,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_FL,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_BL,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_TRAL,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_TRAR,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_CBUC,2.5));
	maxCurrents.insert(std::pair<char,double>(MOT_CHOP,2.5));
	maxCurrents.insert(std::pair<char,double>(ACT_WHEL,2.5));
	maxCurrents.insert(std::pair<char,double>(ACT_WHER,2.5));
	maxCurrents.insert(std::pair<char,double>(ACT_ARML,2.5));
	maxCurrents.insert(std::pair<char,double>(ACT_ARMR,2.5));
}

} // end of namespace MotorControl

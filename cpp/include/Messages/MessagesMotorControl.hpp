#pragma once
#ifndef MESSAGESMOTORCONTROL_HPP_
#define MESSAGESMOTORCONTROL_HPP_

#include <Robos/MessageBase.hpp>
#include "MotorControl/MotorUtil.hpp"
#include "Network/NetworkUtil.hpp"
#include "Messages/MessagesComm.hpp"
#include <memory>
#include <stdio.h>
#include <string.h>

namespace Messages {

struct MessageMotorAction : public MessageBaseCommand {
	MotorControl::Action action;
	char* ser;
	int len_ser;
	char* serialized() {
		return ser;
	}
	int len_serialized() {
		return len_ser;
	}
	void fromPacket(char* p,int l) {
		action.num_motors = ser[0];
		::memcpy(&action.speed,p+1,4);
		::memcpy(&action.distance,p+5,4);
		action.ovr = (bool)p[9];
		action.use_dist = (bool)p[10];
		action.motor = (char*)::malloc(action.num_motors);
		action.direction = (bool*)::malloc(action.num_motors);
		::memcpy(action.motor,ser+11,action.num_motors);
		::memcpy(action.direction,ser+11+action.num_motors,action.num_motors);
		len_ser = 11+2*action.num_motors;
		ser = (char*)::malloc(11+2*action.num_motors);
		::memcpy(ser,p,len_ser);
	}
	MessageMotorAction(MotorControl::Action action, Network::Response rsp) : MessageBaseCommand(rsp,"MotorAction"),action(action) {
		len_ser = 2*action.num_motors + 11;
		ser = (char*)::malloc(len_ser);
		ser[0] = action.num_motors;
		::memcpy(ser+1,&action.speed,4);
		::memcpy(ser+5,&action.distance,4);
		ser[9] = (char)action.ovr;
		ser[10] = (char)action.use_dist;
		::memcpy(ser+11,action.motor,action.num_motors);
		::memcpy(ser+11+action.num_motors,action.direction,action.num_motors);
	}
	MessageMotorAction();
	~MessageMotorAction();
};


} // end of namespace Messages

#endif // end of MESSAGESMOTORCONTROL_HPP_
/*
 * MotorNode.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: Steven L
 */
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"
#ifndef COMMTRANSMITTER_HPP_
#define COMMTRANSMITTER_HPP_

namespace Network {
class CommTransmitter : public Robos::NodeBase {
private:
	Robos::MessageBasePtr MainCallbackImpl(const Robos::MessageBasePtr pMessage) override;
public:
	CommTransmitter();
	~CommTransmitter();
};
}

 #endif /* COMMTRANSMITTER_HPP_ */
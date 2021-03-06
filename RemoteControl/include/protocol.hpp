#pragma once
#include <inttypes.h>

#ifndef protocol_h
#define protocol_h

#define MAX_RECV_LEN (2048 + sizeof (struct protocol_header))

struct protocol_header
{
	char magic [4]; //What type of signal are we receiving?
	uint16_t len; //Number of bytes in addition to protocol header.
	uint8_t number; //Used to keep track of order
};

#define COMMAND_MAGIC "CMD"
#define RECEIPT_MAGIC "REC"
#define SYNC_MAGIC "SYN"

#endif

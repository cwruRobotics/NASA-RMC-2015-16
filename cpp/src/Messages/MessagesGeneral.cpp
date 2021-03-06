// SYSTEM INCLUDES


// C++ PROJECT INCLUDES
#include "Messages/MessagesGeneral.hpp"

namespace Messages
{

    MessageSuccess::MessageSuccess() : Robos::MessageBase("Success")
    {
    }

    MessageSuccess::~MessageSuccess()
    {
    }

    MessageFailure::MessageFailure() : Robos::MessageBase("Failure")
    {
    }

    MessageFailure::~MessageFailure()
    {
    }

    MessageSuccessVerbose::MessageSuccessVerbose(char* message) : Robos::MessageBase("SuccessVerbose")
    {
	    successMessage = message;
    }

    MessageSuccessVerbose::~MessageSuccessVerbose()
    {
    }

    MessageFailureVerbose::MessageFailureVerbose(char* message) : Robos::MessageBase("FailureVerbose")
    {
	    failureMessage = message;
    }

    MessageFailureVerbose::~MessageFailureVerbose()
    {
    }
} // end of namespace Messages

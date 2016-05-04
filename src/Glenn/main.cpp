// SYSTEM INCLUDES
#include <Robos/Robos.hpp>
#include <Communications/CommTransmitter.hpp>
#include <Communications/CommReceiver.hpp>
#include <Utilities/OSUtils.hpp>
#include <chrono>
#include <thread>


// C++ PROJECT INCLUDES


int main(int argc, char** argv)
{
    // initialize Nodes
    auto pNetworkingNode = std::make_shared<Network::CommReceiver>();

    // initialize Robos
    Robos::Init(Utilities::OS::GetCurrentDirectory(__FILE__) + Utilities::OS::GetPathDelimiter() + "AsyncConfig.xml");

    // register Nodes with Robos
    Robos::Register(pNetworkingNode);

    // Start Robos
    Robos::Start();

    // wait for timeout (or for a Node to kill)
    std::this_thread::sleep_for(std::chrono::seconds(10));
    // in the real version...call Robos::WaitForShutdown();
    // this thread will go to sleep until a Node makes a call to ShutdownRobos();
    // and then this thread will be woken up.

    // stop Robos
    Robos::Stop();
    return 0;
}

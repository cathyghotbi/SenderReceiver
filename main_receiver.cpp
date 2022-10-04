
// g++ -Wall -Wextra -Werror receiver.cpp main_receiver.cpp -o receiver && ./receiver

#include <iostream>

#include "receiver.hpp"

int main()
{
  std::cout << "receiver app started.." << std::endl;
  
  Receiver receiver("exchangeMessage.txt", 25);
  receiver.receiveInpuFromSender();
  receiver.destroyMessageQueueAfterReceiving();

  return 0;
}




// g++ -Wall -Wextra -Werror sender.cpp main_sender.cpp -o sender && ./sender

#include <iostream>

#include "sender.hpp"


int main()
{
  std::cout << "sender app started.." << std::endl;

  Sender sender("exchangeMessage.txt", 25);
  auto buffer = sender.takeInputFromUser();
  sender.sendInpuToReceiver(buffer);
  
  return 0;
}

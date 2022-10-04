
#include <iostream>

#include "sender.hpp"

MessageBuffer Sender::takeInputFromUser()
{
  MessageBuffer msgBuf;

  msgBuf.messageType = 1;
  std::cout << "writing data.." << std::endl;
  std::cin >> msgBuf.messageText;

  return msgBuf;
}

void Sender::sendInpuToReceiver(MessageBuffer& msgBuf)
{
  msgsnd(m_msgid, &msgBuf, sizeof(msgBuf), 0);
  std::cout << "message is sent.." << std::endl;
  std::cout << msgBuf.messageText << std::endl;
}

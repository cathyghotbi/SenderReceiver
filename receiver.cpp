
#include <iostream>

#include "receiver.hpp"

void Receiver::receiveInpuFromSender()
{
  MessageBuffer msgBuf;
  msgrcv(m_msgid, &msgBuf, sizeof(msgBuf), 1, 0);
  std::cout << "below message has been received:" << std::endl;
  std::cout << msgBuf.messageText << std::endl;
}

void Receiver::destroyMessageQueueAfterReceiving()
{
  msgctl(m_msgid, IPC_RMID, NULL);
}

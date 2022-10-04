
#pragma once

#include <sys/ipc.h>
#include <sys/msg.h>

#include "messageIf.hpp"


class Receiver
{
public:
  Receiver(const char* filePath, int proj_id)
  {
    key_t IPCKey= ftok(filePath, proj_id);
    m_msgid = msgget(IPCKey, 0666 | IPC_CREAT);
  }
  
  void receiveInpuFromSender();
  void destroyMessageQueueAfterReceiving();

private:
  int m_msgid;
};

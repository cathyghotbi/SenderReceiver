
#pragma once

#include <string>
#include <sys/ipc.h>
#include <sys/msg.h>

#include "messageIf.hpp"

class Sender //TODO: how to notify user that something faile in the constructor
{
public:
  Sender(const char* filePath, int proj_id)
  {
    key_t IPCKey= ftok(filePath, proj_id);
    m_msgid = msgget(IPCKey, 0666 | IPC_CREAT); 
  }
  
  MessageBuffer takeInputFromUser();
  void sendInpuToReceiver(MessageBuffer& buff);

private:
  int m_msgid;
};

#include "GameClient.h"

GameClient::GameClient()
  : mRPC(false)
{
}

bool GameClient::join(const std::string &ip, unsigned int port)
{
  return mRPC.initialize(ip, port);
}

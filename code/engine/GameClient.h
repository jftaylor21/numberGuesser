#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <string>
#include <utilities/utilities-stringrpc.h>

class GameClient
{
public:
  GameClient();

  bool join(const std::string& ip, unsigned int port);

private:
  Utilities::StringRPC mRPC;
};

#endif

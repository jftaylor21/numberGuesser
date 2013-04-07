#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <string>

class GameClient
{
public:
  GameClient();

  bool join(const std::string& ip, unsigned int port);
};

#endif

#ifndef BASEPLAYER_H
#define BASEPLAYER_H

#include <string>

class BasePlayer
{
public:
  BasePlayer();

  bool join(const std::string& ip, unsigned int port);
};

#endif

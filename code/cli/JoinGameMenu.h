#ifndef JOINGAMEMENU_H
#define JOINGAMEMENU_H

#include "BaseMenu.h"

class JoinGameMenu : public BaseMenu
{
public:
  JoinGameMenu();

  void grabIP();
  void grabPort();

private:
  std::string mIP;
  std::string mPort;
};

#endif

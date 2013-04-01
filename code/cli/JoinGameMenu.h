#ifndef JOINGAMEMENU_H
#define JOINGAMEMENU_H

#include "BaseMenu.h"
#include <engine/BasePlayer.h>

class JoinGameMenu : public BaseMenu
{
public:
  JoinGameMenu();

  void grabIP();
  void grabPort();

private:
  BasePlayer mPlayer;
  std::string mIP;
  std::string mPort;
};

#endif

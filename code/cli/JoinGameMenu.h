#ifndef JOINGAMEMENU_H
#define JOINGAMEMENU_H

#include <utilities/utilities-cli-menu.h>
#include <engine/BasePlayer.h>

class JoinGameMenu : public Utilities::CLIMenu
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

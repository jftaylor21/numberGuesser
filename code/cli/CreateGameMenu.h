#ifndef CREATEGAMEMENU_H
#define CREATEGAMEMENU_H

#include <utilities/utilities-cli-menu.h>
#include <engine/GameServer.h>
#include <engine/GameClient.h>

class CreateGameMenu : public Utilities::CLIMenu
{
public:
  CreateGameMenu();

  void grabMinimum();
  void grabMaximum();
  void grabNumGuesses();

private:
  GameServer mServer;
  GameClient mClient;
  std::string mMinimum;
  std::string mMaximum;
  std::string mNumGuesses;
};

#endif

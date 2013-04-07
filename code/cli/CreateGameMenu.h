#ifndef CREATEGAMEMENU_H
#define CREATEGAMEMENU_H

#include <utilities/utilities-cli-menu.h>
#include <engine/BaseGame.h>
#include <engine/BasePlayer.h>

class CreateGameMenu : public Utilities::CLIMenu
{
public:
  CreateGameMenu();

  void grabMinimum();
  void grabMaximum();
  void grabNumGuesses();

private:
  BaseGame mGame;
  BasePlayer mPlayer;
  std::string mMinimum;
  std::string mMaximum;
  std::string mNumGuesses;
};

#endif

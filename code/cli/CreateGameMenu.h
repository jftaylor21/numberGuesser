#ifndef CREATEGAMEMENU_H
#define CREATEGAMEMENU_H

#include "BaseMenu.h"
#include <engine/BaseGame.h>
#include <engine/BasePlayer.h>

class CreateGameMenu : public BaseMenu
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

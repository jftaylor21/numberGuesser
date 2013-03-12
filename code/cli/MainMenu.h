#ifndef MAINMENU_H
#define MAINMENU_H

#include "BaseMenu.h"
#include "CreateGameMenu.h"
#include "JoinGameMenu.h"

class MainMenu : public BaseMenu
{
public:
  MainMenu();

private:
  CreateGameMenu mCreateGameMenu;
  JoinGameMenu mJoinGameMenu;
};

#endif

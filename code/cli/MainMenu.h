#ifndef MAINMENU_H
#define MAINMENU_H

#include <utilities/utilities-cli-menu.h>
#include "CreateGameMenu.h"
#include "JoinGameMenu.h"

class MainMenu : public Utilities::CLIMenu
{
public:
  MainMenu();

private:
  CreateGameMenu mCreateGameMenu;
  JoinGameMenu mJoinGameMenu;
};

#endif

#include "MainMenu.h"

MainMenu::MainMenu()
  : BaseMenu("Welcome to Number Guesser")
{
  addChoice(mCreateGameMenu);
  addChoice(mJoinGameMenu);
}

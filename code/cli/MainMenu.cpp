#include "MainMenu.h"

MainMenu::MainMenu()
  : Utilities::CLIMenu("Welcome to Number Guesser")
{
  addChoice(mCreateGameMenu);
  addChoice(mJoinGameMenu);
}

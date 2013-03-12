#include "MainMenu.h"
#include <cstdlib>

MainMenu::MainMenu()
  : BaseMenu("Welcome to Number Guesser")
{
  Utilities::Callback0 callback(&Utilities::nop);
  addChoice("Exit", callback);
}

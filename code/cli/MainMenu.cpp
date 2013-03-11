#include "MainMenu.h"
#include <cstdlib>

MainMenu::MainMenu()
  : BaseMenu("Welcome to Number Guesser")
{
  Utilities::ObjectCallback0<MainMenu> callback(this, &MainMenu::exit);
  addChoice("Exit", callback);
}

void MainMenu::exit()
{
  ::exit(0);
}

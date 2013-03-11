#include "CLI.h"
#include <utilities/utilities.h>
#include "MainMenu.h"
#include<iostream>

CLI::CLI()
{
}

int CLI::exec()
{
  MainMenu mainmenu;
  mainmenu.display();

  return 0;
}

#include "CLI.h"
#include "MainMenu.h"
#include<iostream>

CLI::CLI()
{
}

int CLI::exec()
{
  MainMenu mainmenu;
  mainmenu.display();

  std::cout << std::endl << "Goodbye" << std::endl;
  return 0;
}

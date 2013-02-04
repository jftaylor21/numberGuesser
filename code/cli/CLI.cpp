#include "CLI.h"
#include <utilities/utilities.h>
#include <iostream>

CLI::CLI()
{
}

int CLI::exec()
{
  mainmenu();

  return 0;
}

void CLI::mainmenu()
{
  Utilities::clearscreen();
  std::cout << "Welcome to Number Guesser" << std::endl;
  std::cout << "1. Create Game" << std::endl;
  std::cout << "2. Exit Game" << std::endl;
}

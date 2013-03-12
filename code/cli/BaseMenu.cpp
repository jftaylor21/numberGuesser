#include "BaseMenu.h"
#include <utilities/utilities.h>
#include <iostream>
#include <limits>

BaseMenu::Choice::Choice(const std::string &choicename, const Utilities::Callback0 &callback)
  : mChoicename(choicename),
    mCallback(callback)
{
}

BaseMenu::BaseMenu(const std::string &title)
  : mTitle(title)
{
}

void BaseMenu::addChoice(const std::string &choicename, const Utilities::Callback0 &callback)
{
  Choice c(choicename, callback);
  mChoices.push_back(c);
}

void BaseMenu::display()
{
  unsigned int choice(0);
  bool whileonce(false);
  while (!choice || choice > mChoices.size())
  {
    Utilities::clearscreen();

    //display menu options
    std::cout << mTitle << std::endl;
    for(unsigned int i(0); i < mChoices.size(); ++i)
    {
      std::cout << i+1 << ". " << mChoices[i].mChoicename << std::endl;
    }

    //display any errors and prompt user for choice
    std::cout << std::endl;
    if (whileonce)
    {
      std::cout << "ERROR: Input out of range." << std::endl;
    }
    std::cout << "Please enter the number corresponding to your choice..."
              << std::endl;
    std::cin >> choice;

    //clear errors and ignore any other data left in buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    whileonce = true;
  }
  mChoices[choice-1].mCallback();
}

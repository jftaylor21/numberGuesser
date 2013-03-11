#include "BaseMenu.h"
#include <utilities/utilities.h>
#include <iostream>

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
  Utilities::clearscreen();

  std::cout << mTitle << std::endl;
  for(unsigned int i(0); i < mChoices.size(); ++i)
  {
    std::cout << i+1 << ". " << mChoices[i].mChoicename << std::endl;
  }


  unsigned int choice(0);
  while (!choice || choice > mChoices.size())
  {
    std::cout << std::endl
              <<"Please enter the number corresponding to your choice..."
              << std::endl;
    std::cin >> choice;
  }
  mChoices[choice-1].mCallback();
}

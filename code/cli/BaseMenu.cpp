#include "BaseMenu.h"
#include <utilities/utilities.h>
#include <iostream>
#include <limits>

BaseMenu::Choice::Choice(const std::string &choicename,
                         const Utilities::Callback0 &callback, std::string* value)
  : mChoicename(choicename),
    mCallback(callback.clone()),
    mValue(value)
{
}

BaseMenu::Choice::Choice(const Choice &copy)
  : mChoicename(copy.mChoicename),
    mCallback(copy.mCallback->clone()),
    mValue(copy.mValue)
{
}

BaseMenu::Choice::~Choice()
{
  delete mCallback;
  mCallback = 0;
}

BaseMenu::Choice& BaseMenu::Choice::operator=(const Choice& rhs)
{
  if (this != &rhs)
  {
    mChoicename = mChoicename;
    delete mCallback;
    mCallback = rhs.mCallback->clone();
    mValue = rhs.mValue;
  }
  return *this;
}

BaseMenu::BaseMenu(const std::string &title)
  : mTitle(title),
    mExit("Exit")
{
}

void BaseMenu::addChoice(const std::string &choicename,
                         const Utilities::Callback0 &callback, std::string* value)
{
  Choice c(choicename, callback, value);
  mChoices.push_back(c);
}

void BaseMenu::addChoice(BaseMenu &menu)
{
  addChoice(menu.title(), Utilities::ObjectCallback0<BaseMenu>(&menu, &BaseMenu::display));
}

void BaseMenu::setExitString(const std::string &str)
{
  mExit = str;
}

void BaseMenu::display()
{
  //keep looping menu until exit choice is selected
  unsigned int choice(0); //invalid exit menu number
  while (choice != mChoices.size()+1)
  {
    //keep looping menu until valid choice is selected
    choice = 1; // valid menu number
    do
    {
      Utilities::clearscreen();

      //display menu options
      std::cout << mTitle << std::endl;
      for(unsigned int i(0); i < mChoices.size(); ++i)
      {
        std::cout << i+1 << ". " << mChoices[i].mChoicename;
        if (mChoices[i].mValue)
        {
          std::cout << ": " << *mChoices[i].mValue;
        }
        std::cout << std::endl;
      }
      std::cout << mChoices.size()+1 << ". " << mExit;

      //display any errors and prompt user for choice
      std::cout << std::endl;
      if (!choice || choice > mChoices.size()+1)
      {
        std::cout << "ERROR: Input out of range." << std::endl;
      }
      choice = inputChoice("Please enter the number corresponding to your choice...");
    } while (!choice || choice > mChoices.size()+1);

    //execute callback
    if (choice-1 < mChoices.size())
    {
      (*mChoices[choice-1].mCallback)();
    }
  }
}

std::string BaseMenu::title() const
{
  return mTitle;
}

unsigned int BaseMenu::inputChoice(const std::string& text)
{
  unsigned int ret(0);

  //present text and grab input
  std::cout << text << std::endl;
  std::cin >> ret;

  //clear errors and ignore any other data left in buffer
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  return ret;
}

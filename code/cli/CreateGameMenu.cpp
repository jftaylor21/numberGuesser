#include "CreateGameMenu.h"
#include <utilities/utilities-string.h>

CreateGameMenu::CreateGameMenu()
  : Utilities::CLIMenu("Create Game"),
    mMinimum(Utilities::toString(mServer.minimum())),
    mMaximum(Utilities::toString(mServer.maximum())),
    mNumGuesses(mServer.numGuesses()==0?"Infinite":Utilities::toString(mServer.numGuesses()))
{
  addChoice("Minimum Number", Utilities::ObjectCallback0<CreateGameMenu>(this, &CreateGameMenu::grabMinimum), &mMinimum);
  addChoice("Maximum Number", Utilities::ObjectCallback0<CreateGameMenu>(this, &CreateGameMenu::grabMaximum), &mMaximum);
  addChoice("Number of Guesses", Utilities::ObjectCallback0<CreateGameMenu>(this, &CreateGameMenu::grabNumGuesses), &mNumGuesses);
  setExitString("Back");
}

void CreateGameMenu::grabMinimum()
{
  std::cout << std::endl;
  while (!mServer.setMinimum(inputChoice("Please enter new minimum...")))
  {
    std::cout << "ERROR: Minimum is not smaller than maximum" << std::endl
              << std::endl;
  }
  mMinimum = Utilities::toString(mServer.minimum());
}

void CreateGameMenu::grabMaximum()
{
  std::cout << std::endl;
  while (!mServer.setMaximum(inputChoice("Please enter new maximum...")))
  {
    std::cout << "ERROR: Maximum is not larger than minimum" << std::endl
              << std::endl;
  }
  mMaximum = Utilities::toString(mServer.maximum());
}

void CreateGameMenu::grabNumGuesses()
{
  std::cout << std::endl;
  while (!mServer.setNumGuesses(inputChoice("Please enter new max number of guesses...")))
  {
    std::cout << "ERROR: Unknown" << std::endl
              << std::endl;
  }
  mNumGuesses = Utilities::toString(mServer.numGuesses());
  if (mNumGuesses == "0")
  {
    mNumGuesses = "Infinite";
  }
}

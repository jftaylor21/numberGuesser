#include "BaseGame.h"

BaseGame::BaseGame()
  : mMinimum(0),
    mMaximum(100),
    mNumGuesses(0)
{
}

bool BaseGame::setMinimum(int value)
{
  bool ret(false);
  if (value < mMaximum)
  {
    mMinimum = value;
    ret = true;
  }
  return ret;
}

int BaseGame::minimum() const
{
  return mMinimum;
}

bool BaseGame::setMaximum(int value)
{
  bool ret(false);
  if (value > mMinimum)
  {
    mMaximum = value;
    ret = true;
  }
  return ret;
}

int BaseGame::maximum() const
{
  return mMaximum;
}

bool BaseGame::setNumGuesses(unsigned int numGuesses)
{
  mNumGuesses = numGuesses;
  return true;
}

unsigned int BaseGame::numGuesses() const
{
  return mNumGuesses;
}

#include "GameServer.h"

GameServer::GameServer()
  : mMinimum(0),
    mMaximum(100),
    mNumGuesses(0)
{
}

bool GameServer::setMinimum(int value)
{
  bool ret(false);
  if (value < mMaximum)
  {
    mMinimum = value;
    ret = true;
  }
  return ret;
}

int GameServer::minimum() const
{
  return mMinimum;
}

bool GameServer::setMaximum(int value)
{
  bool ret(false);
  if (value > mMinimum)
  {
    mMaximum = value;
    ret = true;
  }
  return ret;
}

int GameServer::maximum() const
{
  return mMaximum;
}

bool GameServer::setNumGuesses(unsigned int numGuesses)
{
  mNumGuesses = numGuesses;
  return true;
}

unsigned int GameServer::numGuesses() const
{
  return mNumGuesses;
}

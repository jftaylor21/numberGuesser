#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <string>
#include <utilities/utilities-stringrpc.h>

class GameServer
{
public:
  GameServer();

  bool initialize(const std::string& ip, unsigned int port);

  bool setMinimum(int value);
  int minimum() const;

  bool setMaximum(int value);
  int maximum() const;

  //if numGuesses == 0, players get infinite guesses
  bool setNumGuesses(unsigned int numGuesses);
  unsigned int numGuesses() const;

private:
  int mMinimum;
  int mMaximum;
  unsigned int mNumGuesses;
  Utilities::StringRPC mRPC;
};

#endif

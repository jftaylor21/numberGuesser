#ifndef BASEGAME_H
#define BASEGAME_H

#include <string>

class BaseGame
{
public:
  BaseGame();

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
};

#endif

#ifndef BASEMENU_H
#define BASEMENU_H

#include <utilities/utilities-callback.h>
#include <string>
#include <vector>

class BaseMenu
{
public:
  BaseMenu(const std::string& title);

  void addChoice(const std::string& choicename, const Utilities::Callback0& callback);
  void display();

private:
  struct Choice
  {
    Choice(const std::string& choicename, const Utilities::Callback0& callback);

    std::string mChoicename;
    Utilities::Callback0 mCallback;
  };

  typedef std::vector<Choice> ChoiceList;

  std::string mTitle;
  ChoiceList mChoices;
};

#endif

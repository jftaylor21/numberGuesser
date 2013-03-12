#ifndef BASEMENU_H
#define BASEMENU_H

#include <utilities/utilities-callback.h>
#include <string>
#include <vector>

class BaseMenu
{
public:
  BaseMenu(const std::string& title);

  void addChoice(const std::string& choicename,
                 const Utilities::Callback0& callback, std::string* value=0);
  void addChoice(BaseMenu& menu);
  void setExitString(const std::string& str);
  std::string title() const;
  void display();

private:
  struct Choice
  {
    Choice(const std::string& choicename,
           const Utilities::Callback0& callback, std::string* value);
    Choice(const Choice& copy);
    ~Choice();
    Choice& operator=(const Choice& rhs);

    std::string mChoicename;
    Utilities::Callback0* mCallback;
    std::string* mValue;
  };

  typedef std::vector<Choice> ChoiceList;

  std::string mTitle;
  std::string mExit;
  ChoiceList mChoices;
};

#endif

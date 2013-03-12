#include "JoinGameMenu.h"

JoinGameMenu::JoinGameMenu()
  : BaseMenu("Join Game"),
    mIP("127.0.0.1"),
    mPort("42121")
{
  addChoice("IP Address", Utilities::ObjectCallback0<JoinGameMenu>(this, &JoinGameMenu::grabIP), &mIP);
  addChoice("Port", Utilities::ObjectCallback0<JoinGameMenu>(this, &JoinGameMenu::grabPort), &mPort);
  setExitString("Back");
}

void JoinGameMenu::grabIP()
{
  std::cout << "Please enter IP address..." << std::endl;
  std::cin >> mIP;
}

void JoinGameMenu::grabPort()
{
  std::cout << "Please enter port..." << std::endl;
  std::cin >> mPort;
}

#include "JoinGameMenu.h"
#include <utilities/utilities-string.h>
#include <utilities/utilities-socket.h>

JoinGameMenu::JoinGameMenu()
  : BaseMenu("Join Game"),
    mIP("127.0.0.1"),
    mPort("54545")
{
  addChoice("IP Address", Utilities::ObjectCallback0<JoinGameMenu>(this, &JoinGameMenu::grabIP), &mIP);
  addChoice("Port", Utilities::ObjectCallback0<JoinGameMenu>(this, &JoinGameMenu::grabPort), &mPort);
  setExitString("Back");
}

void JoinGameMenu::grabIP()
{
  std::string ip(mIP);
  do
  {
    std::cout << std::endl;
    if (!Utilities::Socket::validateIP(ip))
    {
      std::cout << "ERROR: IP " << ip << " not valid." << std::endl;
    }
    std::cout << "Please enter IP Address (x.x.x.x)..." << std::endl;
    std::cin >> ip;
  } while (!Utilities::Socket::validateIP(ip));

  mIP = ip;
}

void JoinGameMenu::grabPort()
{
  unsigned int port(Utilities::toInt(mPort));
  do
  {
    std::cout << std::endl;
    if (port < 49152 || port > 65535)
    {
      std::cout << "ERROR: Port number " << port << " out of range." << std::endl;
    }
    port = inputChoice("Please enter port number (49152-65535)...");
  } while (port < 49152 || port > 65535);

  mPort = Utilities::toString(port);
}

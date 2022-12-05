// url.h
#include <iostream>
// Url class declaration
class Url {
public:
  // data members
  std::string protocol;
  std::string resource;
  // member functions
  // constructor
  Url(std::string& protocol, std::string& resource);
  // interrogation
  void display();
};


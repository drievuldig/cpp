// main.cpp
#include <iostream>
#include "url.h"

// main program, tests Url class
int main() {
  // initialize
  std::string protocol{"http"};
  std::string resource{"example.com/index.html"};
  // display
  Url url(protocol, resource);
  url.display();
  url.resource = "another.example.com/index.html";
  url.display();
  return 0;
}
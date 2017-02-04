//
// Created by itsbriany on 04/02/17.
//

#include <iostream>
#include "Spire.h"

void Spire::start() {
  std::cout << "It lives!" << std::endl;
}

int main(int arc, char *argv[]) {
  Spire spire;
  spire.start();
  return 0;
}


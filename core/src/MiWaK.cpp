#include "MiWaK.h"
#include <iostream>

MiWaK::MiWaK() {}

MiWaK::~MiWaK() {}

void MiWaK::test(const std::string s) const {
  std::cout << "Hello " << s << " \n";
}

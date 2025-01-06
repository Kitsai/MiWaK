#include "MiWaK.h"
#include <memory>

int main() {
  std::unique_ptr<MiWaK> mk = std::make_unique<MiWaK>();
  mk->test("visual");
  return 0;
}

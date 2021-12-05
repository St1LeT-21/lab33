#include <iostream>
#include <share_point.hpp>

int main() {
  shared_ptr<int> p1(new int(9));
  shared_ptr<int> p2(p1);
  return 0;
}
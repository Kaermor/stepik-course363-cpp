#include <iostream>

int main() {
    int h, a, b, ost;
    std::cin >> h >> a >> b;
    ost = (h-b)%(a-b);
    std::cout << (h-b)/(a-b) + (ost*(ost+1))/(ost*ost+1) << std::endl;
  return 0;
}

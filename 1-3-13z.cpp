#include <iostream>

int main() {
	int x, x1, x2, x3, x4;
	std::cin >> x;
	x1 = x / 1000;
	x2 = (x % 1000) / 100;
	x3 = (x % 100) / 10;
	x4 = x % 10;
	std::cout << ((x4*10 - x1*10) + (x3*3 - x2*3)) + 1 << std::endl;
  return 0;
}

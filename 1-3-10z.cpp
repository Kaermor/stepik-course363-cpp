#include <iostream>

int main() {
    int n;
	std::cin >> n;
	std::cout << (n / 3600) % 24 << ":" << ((n % 3600) / 60) / 10 << ((n % 3600) / 60) % 10 << ":" << ((n % 3600) % 60) / 10 << ((n % 3600) % 60) % 10;
  return 0;
}

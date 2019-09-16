#include <iostream>

int main() {
	int n, m, k;
	std::cin >> n >> m >> k;
	if (k%n == 0 && n*m >= k) {
		std::cout << "YES";
	}
	else if (k%m == 0 && n*m >= k) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
  return 0;
}

#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a == b && a == c) {
		std::cout << a << ' ' << b << ' ' << c;
	}
	else if (a == b) {
		if (a < c) {
			std::cout << a << ' ' << b << ' ' << c;
		}
		else {
			std::cout << c << ' ' << b << ' ' << a;
		}
	}
	else if (b == c) {
		if (a < c) {
			std::cout << a << ' ' << b << ' ' << c;
		}
		else {
			std::cout << c << ' ' << b << ' ' << a;
		}
	}
	else if (a == c) {
		if (a < b) {
			std::cout << a << ' ' << c << ' ' << b;
		}
		else {
			std::cout << b << ' ' << c << ' ' << a;
		}
	}
	else if (a > b && a > c) {
		if (b < c) {
			std::cout << b << ' ' << c << ' ' << a;
		}
		else {
			std::cout << c << ' ' << b << ' ' << a;
		}
	}
	else if (b > a && b > c) {
		if (a < c) {
			std::cout << a << ' ' << c << ' ' << b;
		}
		else {
			std::cout << c << ' ' << a << ' ' << b;
		}
	}
	else if (c > a && c > b) {
		if (a < b) {
			std::cout << a << ' ' << b << ' ' << c;
		}
		else {
			std::cout << b << ' ' << a << ' ' << c;
		}
	}
  return 0;
}

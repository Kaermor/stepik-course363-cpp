#include <iostream>

int main() {
	int n, m, x, y, d, s;
	std::cin >> n >> m >> x >> y;
	if (n >= m) {
		d = n;
		s = m;
	}
	else {
		d = m;
		s = n;
	}
	if (x < y && x < s - x && x < d - y) {
		std::cout << x;
	}
	else if (s - x < x && s - x < y && s - x < d - y) {
		std::cout << s - x;
	}
	else if (y < x && y < s - x && y < d - y) {
		std::cout << y;
	}
	else {
		std::cout << d - y;
	}
  return 0;
}

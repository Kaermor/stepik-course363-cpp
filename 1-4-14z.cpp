#include <iostream>

int main() {
	int a1, b1, c1, a2, b2, c2, tmp;
	std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	if (a1 > b1) {
		tmp = b1;
		b1 = a1;
		a1 = tmp;
	}
	if (b1 > c1) {
		tmp = c1;
		c1 = b1;
		b1 = tmp;
	}
	if (a1 > b1) {
		tmp = b1;
		b1 = a1;
		a1 = tmp;
	}
	if (a2 > b2) {
		tmp = b2;
		b2 = a2;
		a2 = tmp;
	}
	if (b2 > c2) {
		tmp = c2;
		c2 = b2;
		b2 = tmp;
	}
	if (a2 > b2) {
		tmp = b2;
		b2 = a2;
		a2 = tmp;
	}
	if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
		if (a1 == a2 && b1 == b2 && c1 == c2) {
			std::cout << "Boxes are equal" << std::endl;
		}
		else {
			std::cout << "The first box is larger than the second one" << std::endl;
		}
	}
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
		if (a1 == a2 && b1 == b2 && c1 == c2) {
			std::cout << "Boxes are equal" << std::endl;
		}
		else {
			std::cout << "The first box is smaller than the second one" << std::endl;
		}
	}
	else {
		std::cout << "Boxes are incomparable" << std::endl;
	}
  return 0;
}

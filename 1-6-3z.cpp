#include <iostream>
#include <cmath>


int main() {
    double a, b, c, p;
    std::cin >> a >> b >> c;
    p = (double)(a + b+ c)/2;
    std::cout << sqrt(p*(p-a)*(p-b)*(p-c)) << std::endl;

    return 0;
}

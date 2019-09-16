#include <iostream>
#include <cmath>


int main() {
    double x;
    std::cin >> x;
    std::cout << x - trunc(x) << std::endl;

    return 0;
}

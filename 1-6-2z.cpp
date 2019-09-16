#include <iostream>
#include <cmath>


int main() {
    double x;
    std::cin >> x;
    std::cout << trunc((x - trunc(x))*10) << std::endl;

    return 0;
}

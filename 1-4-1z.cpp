#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a!=b) {
        if (a>b){
            std::cout << a;
        }
        else {
            std::cout << b;
        }
    }
    else {
        std::cout << a << std::endl;
    }
  return 0;
}

#include <iostream>

int main() {
    int x = 1, n;
    std::cin >> n;
    while (x <= n){
        std::cout << x << " ";
        x = x*2;
    }
  return 0;
}

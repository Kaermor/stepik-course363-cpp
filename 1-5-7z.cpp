#include <iostream>

int main() {
    int max = -1, n;
    std::cin >> n;
    while (n != 0){
        if (n > max){
            max = n;
        }
        std::cin >> n;
    }
std::cout << max << std::endl;
  return 0;
}

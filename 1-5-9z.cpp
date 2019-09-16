#include <iostream>

int main() {
    int max1 = -1, max = -1, n;
    std::cin >> n;
    while (n != 0){
        if (n >= max){
            max1 = max;
            max = n;
        }
        else if (n >= max1){
            max1 = n;
        }
        std::cin >> n;
    }
std::cout << max1 << std::endl;
  return 0;
}

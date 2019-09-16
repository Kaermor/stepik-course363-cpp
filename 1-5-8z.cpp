#include <iostream>

int main() {
    int i = 0, max = -1, n;
    std::cin >> n;
    while (n != 0){
        if (n > max){
            max = n;
            i = 0;
        }
        if (n == max){
            i++;
        }
        std::cin >> n;
    }
std::cout << i << std::endl;
  return 0;
}

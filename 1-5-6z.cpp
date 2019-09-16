#include <iostream>

int main() {
    int sum = 0, n;
    std::cin >> n;
    while (n != 0){
        sum = sum + n;
        std::cin >> n;
        
    }
std::cout << sum << std::endl;
  return 0;
}

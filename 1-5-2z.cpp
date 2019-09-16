#include <iostream>

int main() {
    int i = 2, n;
    std::cin >> n;
    while (n%i != 0){
        i++;
    }
    std::cout << i << std::endl;
  return 0;
}

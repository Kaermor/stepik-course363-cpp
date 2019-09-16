#include <iostream>

int main() {
    int n, max, x0, x, i=0;
    std::cin >> x0;
    std::cin >> x;
    std::cin >> n;
    while (n != 0){
        if (x > x0 && x > n){
            i++;
            x0 = x;
            x = n;
        }
        else{
            x0 = x;
            x = n;
        }
        std::cin >> n;
    }
    std::cout << i << std::endl;
    return 0;
  return 0;
}

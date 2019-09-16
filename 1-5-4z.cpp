#include <iostream>

int main() {
    int x = 1, n;
    std::cin >> n;
    while (x <= n){

        x = x*2;
    }
    if (x/2 == n){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl; 
    }
  return 0;
}

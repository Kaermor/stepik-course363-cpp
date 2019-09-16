#include <iostream>

int main() {
    int f0=0, f1=1, f=0, n, i=2;
    std::cin >> n;
    while (f < n){
        f = f1 + f0;
        f0 = f1;
        f1 = f;
        i++;
    }
    if (f==n){
    std::cout << i-1 << std::endl;
    }
    else{
    std::cout << -1 << std::endl;
    }
  return 0;
}

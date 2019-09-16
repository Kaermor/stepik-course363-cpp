#include <iostream>

int main() {
    int f0=0, f1=1, f=0, n, i=2;
    std::cin >> n;
    while (i <= n){
        f = f1 + f0;
        f0 = f1;
        f1 = f;
        i++;
    }
    if (n==0){
    std::cout << f0 << std::endl;
    }
    else if (n==1){
    std::cout << f1 << std::endl;
    }
    else{
    std::cout << f << std::endl;
    }
  return 0;
}

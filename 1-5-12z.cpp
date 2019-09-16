#include <iostream>

int main() {
    int i = 1, i1 = 1, n, n1 = -1;
    std::cin >> n;
    while (n != 0){
        if (n == n1){
            i++;
        }
        else {
            n1 = n;
            if (i >= i1){
            i1 = i;
            i = 1;
            }
            else{
                i=1;
            }
        }
    std::cin >> n;
    }
    //std::cout << "i=" << i << ' ' << "i1=" << i1 << std::endl;
    if (i>i1){
        std::cout << i << std::endl;
    }
    else{
        std::cout << i1 << std::endl;
    }
  return 0;
}

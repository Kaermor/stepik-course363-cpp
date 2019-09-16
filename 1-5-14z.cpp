#include <iostream>

int main() {
    int n, x0, x, i=0, p1=0, p2=0, pn = 2, px;
    std::cin >> x0;
    if (x0 == 0){
        std::cout << 0 << std::endl;
        return 0;
    }
    std::cin >> x;
    if (x == 0){
        std::cout << 0 << std::endl;
        return 0;
    }
    std::cin >> n;
    if (n == 0){
        std::cout << 0 << std::endl;
        return 0;
    }
    while (n != 0){
        if (x > x0 && x > n){
            i++;
            x0 = x;
            x = n;
            if (i == 1){
                p1 = pn;
            }
            else if (i == 2){
                p2 = pn;
                px = p2 - p1;
            }
            else{
                if (pn - p2 <= px){
                    px = pn - p2;
                    p1 = p2;
                    p2 = pn;
                }
                else{
                    p1 = p2;
                    p2 = pn;
                }

            }

        }
        else{
            x0 = x;
            x = n;
            //p1++;
        }
        std::cin >> n;
        pn++;
    }
    if (i < 2) {
        std::cout << 0 << std::endl;
    }
    else{
        std::cout << px << std::endl;
    }
  return 0;
}

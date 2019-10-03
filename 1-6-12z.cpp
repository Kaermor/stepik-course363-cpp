#include <iostream>

using namespace std;

int main() {

    double a, b, c, d, e, f, x, y, D, Dx, Dy, kn, kk;
    int n;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    D = d*a - b*c;
    Dx = e*d - b*f;
    Dy = a*f - e*c;

//Если система имеет единственное решение (x0, y0), то программа должна вывести
//число 2, а затем значения x0 и y0.
    if (D != 0){
        n = 2;
        x = (e*d - b*f) / (d*a - b*c);
        y = (a*f - e*c) / (d*a - b*c);
        cout << n << " " << x << " " << y << endl;
        return 0;
    }
    else if (Dx == 0 and Dy == 0){
        if (a == 0 and b == 0 and c == 0 and d ==0){
            if (e != 0 or f != 0){
                n = 0;
                cout << n << endl;
                return 0;
            }
            else {
                n = 5;
                cout << n << endl;
                return 0;
            }
        }
        else if (a == 0 and c == 0){
            if (b != 0) {
                n = 4;
                y = e / b;
                cout << n << " " << y << endl;
                return 0;
            }
            else {
                n = 4;
                y = f / d;
                cout << n << " " << y << endl;
                return 0;
            }
        }
        else if (b == 0 and d == 0) {
            if (a != 0) {
                n = 3;
                x = e / a;
                cout << n << " " << x << endl;
                return 0;
            }
            else {
                n = 3;
                x = f / c;
                cout << n << " " << x << endl;
                return 0;
            }
        }
        else if (b != 0) {
            n = 1;
            kn = e / b;
            kk = -a / b;
            cout << n << " " << kk << " " << kn << endl;
            return 0;
        }
        else {
            n = 1;
            kn = f / d;
            kk = -c / d;
            cout << n << " " << kk << " " << kn << endl;
            return 0;
        }
    }





/*
//Если система не имеет решений, то программа должна вывести единственное число 0.
    if (){

        n = 0;
    }
//Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n,
//то программа должна вывести число 1, а затем значения k и n.
    if (){

        n = 1;
    }

//Если система имеет бесконечно много решений вида x=x0, y — любое, то программа
//должна вывести число 3, а затем значение x0.
    if (b == 0 and ){

        n = 3;
    }
//Если система имеет бесконечно много решений вида y=y0, x — любое, то программа
//должна вывести число 4, а затем значение y0.
    if (){

        n = 4;
    }
//Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.
    if (){

        n = 5;
    }

    cout << n << x << " " << y << endl;
}*/
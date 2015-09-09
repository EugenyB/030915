#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Привет, Мир!" << endl;
    int a = 5;
    int b = 3;
    int c = a+b;
    int d = a*b;
    int p = a/b;
    int r = a%b;
    cout << c << endl;
    cout << d << endl;
    cout << p << endl;
    cout << r << endl;

    double x = 3.1415926/6;
    double y = sin(x);
    cout << y << endl;
    return 0;
}
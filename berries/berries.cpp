#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;   // вес ягод без корзин
    int a1, b1; // вес без перекладывания
    int a2, b2; // вес в корзине первого
    int a3, b3; // вес в корзине третьего

    int x, y; // вес корзин

    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;

    y = b2;
    x = a3;

    a = a1 - x;
    b = b1 - y;

    cout << a << " " << b;

    return 0;
}
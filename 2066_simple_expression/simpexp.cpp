#include <bits/stdc++.h>
using namespace std;

int main()
{
    int16_t a, b, c, answer1, answer2;
    cin >> a >> b >> c;

    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);

    answer1 = a - b - c;
    answer2 = a - b * c;

    if (answer1 >= answer2)
        cout << answer2;
    else
        cout << answer1;
    return 0;
}
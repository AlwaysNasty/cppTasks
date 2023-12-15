#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl
         << endl;

    int32_t x = 5;
    int32_t y = 9;
    cout << x << " " << y << "\n";

    auto tmp = x;
    x = y;
    y = tmp;

    cout << x << " " << y << "\n";

    return 0;
}
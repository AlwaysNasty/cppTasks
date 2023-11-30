#include <bits/stdc++.h>
using namespace std;

int main()
{
    int problems = 12, time_m, f;
    cin >> f;

    int rest = problems - f; // оставшиеся задачи

    time_m = 240; // оставшееся время

    int result = time_m - 45 * rest;

    if (result >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
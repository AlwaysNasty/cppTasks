#include <bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    if (a < 1)
        return 1;

    return a * factorial(a - 1);
}

int phi(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    int x;
    cout << "enter your number: " << endl;
    cin >> x;
    cout << phi(x) << endl;
    cout << factorial(x);
    return 0;
}
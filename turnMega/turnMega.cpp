#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int n;
    cin >> k >> n;

    int a;
    int sum = 0;
    int pr = 0;

    string astr;
    astr.resize(n);
    getline(cin, astr);
    a = stoi(astr);

    for (int i = 0; i < n; i++)
    {
        int digit = a % 10;
        pr += digit - k;
        a /= 10;
    }
    cout << pr;
    return 0;
}
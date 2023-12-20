#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test1, test2;
    cin >> test1 >> test2;
    cout << test1 / test2 * test1 << "\t" << test2 / test1 * test2 << "\n";
    cout << test1 / test2 << "\t" << test2 / test1 << "\n";
    cout << (test1 / test2 * test1 + test2 / test1 * test2) / (test1 / test2 + test2 / test1);
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int halfs = n * 2;

    int result;
    result = halfs / k + halfs % k;
    cout << result;
    return 0;
}
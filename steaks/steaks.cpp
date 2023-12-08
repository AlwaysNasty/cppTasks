#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int halfs = n * 2;

    int result;
    if (n <= k)
    {
        result = 2;
    }
    else if (halfs % k == 0)
    {
        result = halfs / k;
    }
    else
    {
        result = halfs / k + 1;
    }

    cout << result;
    return 0;
}

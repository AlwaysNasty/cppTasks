#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int n;
    cin >> k >> n;

    vector<int> a(n);
    int pr = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] >= k)
        {
            pr += a[i] - k;
        }
        else
        {
            if (pr != 0)
            {
                if (k - a[i] > pr)
                {
                    pr = 0;
                }
                else
                {
                    pr -= k - a[i];
                }
            }
        }
    }

    cout << pr;
    return 0;
}
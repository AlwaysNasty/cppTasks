#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstLock, secondLock;
    cin >> firstLock >> secondLock; // номера замков

    int lockVal1, lockVal2;

    bool change = false;

    lockVal1 = stoi(firstLock);
    lockVal2 = stoi(secondLock);

    int currentValue = lockVal1;

    int code = 1;

    string result = "yes";

    while (code < 9999)
    {
        if (!change)
        {
            currentValue = lockVal2;
        }
        else
        {
            currentValue = lockVal1;
        }
        ///////////////////////////////////////////
        if ((code > lockVal1) && (code > lockVal2))
        {
            result = "no";
            break;
        }

        if (code == currentValue)
        {
            result = "yes";
            break;
        }
        ///////////////////////////////////////////
        change = !change;
        ++code;
    }
    cout << result;

    return 0;
}
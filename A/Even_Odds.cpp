#include <bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long n, k;
    cin >> n >> k;

    if (n & 1)
    {
        if (k <= n/2 + 1)
            cout << 2*k - 1;
        else
            cout << 2*(k - n/2 - 1);
    }
    else
    {
        if (k <= n /2)
            cout << 2*k - 1;
        else
            cout << 2*(k - n/2);
    }

    return 0;
}
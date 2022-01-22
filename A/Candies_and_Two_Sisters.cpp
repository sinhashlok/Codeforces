#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned long long n;
        cin >> n;

        cout << n - ((n/2) + 1) << endl;;
    }

    return 0;
}
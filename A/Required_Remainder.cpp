#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned long long x, y, n, k = 0;
        cin >> x >> y >> n;

        if ((n%x) > y)
            cout << n + y - (n%x) << endl;
        else if ((n%x) == y)
            cout << n << endl;
        else
            cout << (n + y - x -(n%x)) << endl;
    }
    
    return 0;
}
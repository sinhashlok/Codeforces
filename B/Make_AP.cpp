#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned long long a, b, c;
        cin >> a >> b >> c;

        if (2*b == a + c)
            cout << "YES" << endl;
        else if (2*b < a+c)
        {
            int r = (a+c)/(2*b);
            if (2*r*b == a+c)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            int r1 = ((2*b) - c)/a;
            int r2 = ((2*b) - a)/c;

            if ((2*b == (r1*a) + c) || (2*b == a + (r2*c)))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
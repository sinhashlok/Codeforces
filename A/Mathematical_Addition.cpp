#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long u, v, x, y;
        cin >> u >> v;

        x = -1 * pow(u,2);
        y = pow(v,2);

        cout << x << " " << y << endl;
    }

    return 0;
}
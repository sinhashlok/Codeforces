#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long a, b, count = 0;
        cin >> a >> b;

        int dif = abs(a - b);

        for (int i = 10; i >= 1; i--)
        {
            count += dif/i;
            dif = dif % i;
        }

        cout << count << endl;
    }

    return 0;
}
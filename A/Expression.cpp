#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b ,c;
    cin >> a >> b >> c;

    int sol [6], k = INT_MIN;
    sol[0] = a + b*c;
    sol[1] = a * (b+c);
    sol[2] = a*b*c;
    sol[3] = (a+b)*c;
    sol[4] = a+b+c;
    sol[5] = a*(b+c);

    for (int i = 0; i < 6; i++)
    {
        if (sol[i] >= k)
            k = sol[i];
    }

    cout << k << endl;
    return 0;
}
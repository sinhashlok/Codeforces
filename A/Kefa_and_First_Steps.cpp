#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a[n], b = 0, c = 1;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i-1] <= a[i])
        {
            c++;
        }
        else
        {
            if (b < c)
                b = c;
            c = 1;
        }
    }
    
    if (b < c)
        b = c;

    cout << b << endl;
    return 0;
}
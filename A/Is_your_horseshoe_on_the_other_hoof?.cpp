#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a[4];
    int count = 0, c = 0;

    for (int i = 0; i < 4; i++)
        cin >> a[i];
    
    sort(a, a+4);
    
    for (int i = 1; i < 4; i++)
    {
        if (a[i-1] == a[i])
            c++;
        else
        {
            if (c != 0)
                count += c;
            c = 0;
        }
    }

    if (c != 0)
        count += c;

    cout << ((count != 0) ? count : 0) << endl;
    return 0;
}
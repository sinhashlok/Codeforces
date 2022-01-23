#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    int sum = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k > 0)
            pos += k;
        else if (k < 0)
        {
            if (pos < 1)
                sum++;
            else
                pos--;
        }
    }

    cout << sum << endl;
    
    return 0;
}
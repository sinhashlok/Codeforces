#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int maxi = max(a, b);
        int mini = min(a, b);

        mini *= 2;

        if (maxi >= mini)
            cout << maxi*maxi << endl;
        else if (maxi < mini)
            cout << mini * mini << endl;
    }

    return 0;
}
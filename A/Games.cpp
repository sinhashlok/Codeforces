#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    
    int h [n];
    int g[n];

    for (int i = 0; i < n; i++)
        cin >> h[i] >> g[i];

    for (int i = 0; i < n; i++)
        sum += count(g, g + n, h[i]);
    
    cout << sum << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> f (n);
    vector<int> r (n);
    for (int i = 0; i < n; i++)
        cin >> f[i];
    
    for (int i = 0; i < n; i++)
        r[f[i] - 1] = i+1;
    
    for (int i = 0; i < n; i++)
        cout << r[i] << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    vector<double> ojuice (n + 1);

    for (int i = 0; i < n; i++)
        cin >> ojuice[i];
    
    for (int i = 0; i < n; i++)
        ojuice[n] += ojuice[i];
    
    cout << fixed << setprecision(5) << ojuice[n]/n;
    return 0;
}
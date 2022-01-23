#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    int sum = 0;
    sum += min(a,b);
    cout << sum << " ";
    sum = 0;
    
    if (a > b)
        sum += (a - b)/2;
    else if (b > a)
        sum += (b - a)/2;
    
    cout << sum << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    if (n%2 == 0)
        cout << n/2;
    else
    {
        signed long long k = (n+1)/2;
        k = -1*k;
        cout << k;
    }
    
    return 0;
}
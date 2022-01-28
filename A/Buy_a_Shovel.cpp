#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int i = 1;
    while ( ((n*i)%10 != 0) && (((n*i)-l)%10 != 0) )
        i++;

    cout << i << endl;

    return 0;
}
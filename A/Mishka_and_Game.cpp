#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0, c = 0;
    cin >> n;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        
        if (a > b)
            m++;
        else if (a < b)
            c++;
    }

    if (m > c)
        cout << "Mishka" << endl;
    else if (c > m)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}
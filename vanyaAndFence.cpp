#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, h;
    cin >> n >> h;

    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
            count += 2;
        else
            count ++;
    }

    cout << count;

    return 0;
}
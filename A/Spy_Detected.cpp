#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] != arr[1] && arr[0] != arr[2])
        {
            cout << 1 << endl;
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i-1])
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
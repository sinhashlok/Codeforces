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
        n /= 2;

        if (n%2 == 0)
        {
            cout << "YES" << endl;
            int sum = 0, arr[n];
            
            for (int i = 0; i < n; i++)
            {
                arr[i] = 2*(i+1);
                sum += arr[i];
                cout << arr[i] << " ";
            }

            for (int i = 0; i < n-1; i++)
            {
                arr[i] = arr[i] - 1;
                sum -= arr[i];
                cout << arr[i] << " ";
            }
            arr[n - 1] = sum;
            cout << arr[n - 1] << endl;
        }
        else
            cout << "NO" << endl;

    }
}
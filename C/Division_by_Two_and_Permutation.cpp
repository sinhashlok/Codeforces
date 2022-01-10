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

        unsigned long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        vector<bool> num (n, false);
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            while(arr[i] > n)
                arr[i] /= 2;
            
            if (num[arr[i]] == false)
                num[arr[i]] = true;
            else
            {
                while(arr[i] != 0)
                {
                    arr[i] /= 2;
                    if (num[arr[i]] == false)
                    {
                        num[arr[i]] = true;
                        break;
                    }
                }
                if (arr[i] == 0)
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}
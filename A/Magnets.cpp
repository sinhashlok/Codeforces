#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i-1]%10 == arr[i]/10)
            count ++;
    }
    

    cout << count + 1;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<unsigned> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    if (n == 1)
        cout << 0 << endl;
    else
    {
        sort(arr.begin(), arr.end());

        int max = *max_element(arr.begin(), arr.end()), count = 0;
        int find = max_element(arr.begin(), arr.end()) - arr.begin();

        for (int i = 0; i < find; i ++)
            count += (max - arr[i]);
        
        cout << count << endl;
    }

    return 0;
}
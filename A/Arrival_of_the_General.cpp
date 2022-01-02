//general solution - irrespective of constraint
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int maxE = max_element(arr.begin(), arr.end()) - arr.begin();
    int minE = min_element(arr.begin(), arr.end()) - arr.begin();


    if (arr[0] != max)  // First not max
    {
        if (arr[n - 1] == min)    // Last is min
        {
            count += maxE;
            cout << count;
        }
        else    // Last not min
        {
            int find = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == min)
                    find = i;   // find index of last min
            }

            if (find < maxE) // last min before first max
            {
                count += maxE + (n - 1 - find) - 1;
                cout << count;
            }
            else    // last min after first max
            {
                count += maxE + (n - 1 - find);
                cout << count;
            }
        }
    }
    else
    {
        if (arr[n-1] == min)
            cout << count;
        else
        {
            int find = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == min)
                    find = i;   // find index of last min
            }

            count += (n - 1 - find);
            cout << count;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    sort(arr, arr + 4);

    cout << arr[3] - arr[0] << " " <<  arr[3] - arr[1] << " " << arr[3] - arr[2] << " " << endl;

    return 0;
}
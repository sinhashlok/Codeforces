#include <iostream>
using namespace std;

int result(int n, int k, int a[])
{

    int count{ 0 };
    for (size_t i{ 0 }; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
            count++;
        else
            break;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (size_t i{ 0 }; i < n; i++)
        cin >> arr[i];

    cout << result(n, k, arr) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, arr[3], count{ 0 }, ans{ 0 };
    cin >> n;

    while (n--)
    {
        count = 0;
        for (size_t i{ 0 }; i < 3; i++)
            cin >> arr[i];

        for (size_t i{ 0 }; i < 3; i++)
        {
            if (arr[i] == 1)
                count++;
            if (count == 2)
            {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
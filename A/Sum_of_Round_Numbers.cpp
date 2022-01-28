#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, i = 0;
        cin >> n;
        vector<int> nums;
        while (n != 0)
        {
            if (n%10 != 0)
                nums.push_back((n%10)*pow(10,i));
            i++;
            n /= 10;
        }

        cout << nums.size() << endl;
        for (int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";
        
        cout << endl;
    }

    return 0;
}
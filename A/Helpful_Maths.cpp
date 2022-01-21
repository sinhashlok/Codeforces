#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> nums;
    for(int i = 0; i < s.length(); i = i + 2)
        nums.push_back(abs('0' - s[i]));
    
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size()-1)
            cout << "+";
    }

    return 0;
}
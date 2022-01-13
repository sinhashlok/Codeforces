#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, l, x = 0;
        cin >> n >> l;

        vector<int> num (n);
        for (int i = 0; i < n; i++)
            cin >> num[i];
        
        for (int i = 0; i < l; i++)
        {
            int on = 0, off = 0;
            for (int j = 0; j < n; j++)
            {
                if(num[j]&1)
                    on++;
                else
                    off ++;
                
                num[j] = num[j] >> 1;
            }

            if (on > off)
                x += pow(2, i);
        }

        cout << x << endl;
    }

    return 0;
}
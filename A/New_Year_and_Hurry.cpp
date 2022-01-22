#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int time = 240,need = 0,ans = 0;
    time -= k;
    for(int i=1; i<=n; i++){
        need += i * 5;
        if(need <= time){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
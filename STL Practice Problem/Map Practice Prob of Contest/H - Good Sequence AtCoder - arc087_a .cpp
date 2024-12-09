#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>cnt;
    for(int i = 1; i <=n; i++)
    {
        int a;
        cin>>a;
        cnt[a]++;

    }
    int ans = 0;
    for(auto a : cnt)
    {
        if( a.second >= a.first) ans += a.second - a.first;
         else ans+=a.second;
    }
    cout<<ans<<endl;
    return 0;
}


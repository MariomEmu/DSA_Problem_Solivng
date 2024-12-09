#include<bits/stdc++.h>
using namespace std;
const int mx = 5e3 + 123;
int a[mx]; //fix size
int main()
{
    int n;
    cin>>n;
    map<int,int>freq;

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = max(ans,freq[a[i]]);

    }
    cout<<ans<<endl;

    return 0;
}

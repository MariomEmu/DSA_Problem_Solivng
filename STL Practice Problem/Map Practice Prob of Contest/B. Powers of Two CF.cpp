#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n;
    cin>>n;

    vector<int>a(n);
     map<int,int>freq;

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }

    long long ans = 0;


    // Check for all powers of 2 (from 2^0 to 2^32)
    for( int i = 0; i < n; i++)
    {
        freq[a[i]]--; // Temporarily decrement the count of a[i] to avoid pairing with itself
        for(int j = 0; j <= 32; j++) ans+=freq[(1<<j) - a[i]]; // Calculate the complement (2^j - a[i])
    }

    cout<<ans;
    return 0;
}

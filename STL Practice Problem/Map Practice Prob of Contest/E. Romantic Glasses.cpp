#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        map<int,int>m;
        int sum = 0;

    bool ok = false; // Declare and initialize `ok`
    m[0] = 1; // Initialize map with sum 0

    for( int i= 0; i < n; i++)
    {

          // Handle even and odd indices
            if (i % 2 == 0) {
                sum += a[i];  // Even index: add the value
            } else {
                sum -= a[i];  // Odd index: subtract the value
            }

        if(m.find(sum) != m.end())
        {
            ok = true;
            break;
        }
        m[sum] = 1; //store sum in map for update and the value associate 1, if i use bool then true
    }

    if(ok == true) cout<<"YES\n";
    else cout<<"NO\n";
    }

    return 0;
}

/// In the name of Allah
/// google interview question

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define precision(n) cout << fixed << setprecision(n)

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];

    for(int i = 1; i < n; i++)
    {
        if( a[i] > max )
        {
            max = a[i];
        }
        if(a[i] < min)
        {

            min = a[i];
        }
    }
    cout<<max<<endl;
    cout<<min;

}








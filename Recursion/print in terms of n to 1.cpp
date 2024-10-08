#include<bits/stdc++.h>
using namespace std;

void func(int n, int i)
{
    if( n < i)
        return;
    cout<<n<<endl;
    func(n-1,i);
}




int main()
{

    int n;
    cin>>n;
    func(n,1);
    return 0;
}

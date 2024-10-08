#include<bits/stdc++.h>
using namespace std;

void func(int i, int n)
{
  ///base case
  if( i > n) return;
  cout<<i<<endl;

   func(i+1, n);
}


int main()
{
    int n;
    cin>>n;
    ///function call with arguments
    func(1,n);
    return 0;
}

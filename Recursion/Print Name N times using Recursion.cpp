#include<bits/stdc++.h>
using namespace std;

/// Function declaration with parameters
void func(int i, int n)
{
    if( i > n) return;
    cout<<"emu"<<endl;
    func(i+1,n);


}



int main()
{
   int n;
   cin>>n;
/// Function call with arguments
   func(1,n);
    return 0;
}

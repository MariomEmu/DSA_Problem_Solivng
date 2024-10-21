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

//////////////////////////////////////////////////////////////////////



#include<bits/stdc++.h>
using namespace std;


 void f(int n,int cnt = 0){  ///parameterized way recursion

 if(cnt == n) return;

 cout<<"emu"<<endl;

 f(n,cnt+1);
 }
int main()
{
    int n;
    cin>>n;

    f(n);
    return 0;
}

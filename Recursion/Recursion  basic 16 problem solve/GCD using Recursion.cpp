#include <iostream>
using namespace std;

int gcd( int a, int b)
{
    if( b == 0)
    {
         return a;
    }

    return gcd( b, a%b);
}

int main()
{
   int n1,n2;
   cin>>n1>>n2;

   int GCD = gcd(n1,n2);
   cout<<GCD<<endl;




    return 0;
}

/*Tc (a,b)=O(log(min(a,b)))*/


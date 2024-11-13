/*
The Euclidean Algorithm is a method for finding the greatest common divisor of two numbers. 
It operates on the principle that the GCD of two numbers remains the same even if the smaller number is subtracted from the larger number.
*/



#include <iostream>
using namespace std;


int findgcd( int a, int b)
{
    while( a > 0 && b > 0)
    {
        if( a > b)
        {
            a = a%b;
        }

        else
        {
            b = b%a;
        }
    }

    if( a == 0) return b;

    return a;
}


int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int gcd = findgcd( n1,n2);
    cout<<gcd<<endl;




    return 0;
}

/*tc = O(log(min(a, b))) */


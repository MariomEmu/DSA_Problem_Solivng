#include<iostream>
using namespace std;


int findPower( int base, int power)
{
    ///base case
    if( power == 0) return 1;
    return ( base * findPower(base,power - 1));
}
int main()
{
    int base, power;
    cin>>base>>power;

    cout<<findPower(base,power)<<endl;


    return 0;
}

/*
TC = 0(n)
SC = 0(n)
*/

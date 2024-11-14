#include<bits/stdc++.h>
using namespace std;

bool isArmnstrong(int num)
{
   // Calculate the number of digits in the given number means length

    int k = to_string(num).length();

    int sum = 0;
    int temp = num;

    while( num > 0 )
    {
        int ld = num % 10;
        sum = sum + pow( ld, k);
        num = num / 10;
    }

    return( sum == temp );
}

int main()
{
   int num;
   cin>>num;

   if(isArmnstrong(num))
   {
       cout<<num<<" is a Armnstrong"<<endl;
   }

   else
   {
       cout<<num<<" is not a Armnstrong"<<endl;
   }


    return 0;
}

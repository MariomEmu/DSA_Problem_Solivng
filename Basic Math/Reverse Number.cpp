#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;


  int reverseDigit = 0;
  while( n != 0 )
  {
      int ld = n % 10;

      /// Check for overflow/underflow
      if(reverseDigit > INT_MAX / 10 || (reverseDigit == INT_MAX / 10 && ld > 7)) return 0;
      if(reverseDigit < INT_MIN / 10 || (reverseDigit == INT_MIN / 10 && ld < -8)) return 0;

      reverseDigit = (reverseDigit * 10) + ld;
      n = n / 10;
  }


    cout<<reverseDigit;




    return 0;
}

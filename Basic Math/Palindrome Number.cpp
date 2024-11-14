#include<iostream>
using namespace std;

bool isPalindrome(int x)
{
  if( x < 0) return false;


  int revdup = x;
  int reversedigit = 0;

// Reverse the entire number
while( x > 0)
{

    int ld = x % 10;
    reversedigit = (reversedigit*10) + ld; // Build the reversed number
    x = x / 10;

}

return reversedigit == revdup;

}


int main()
{
  int x;
  cin>>x;

  if(isPalindrome(x))
  {
      cout<<"True"<<endl;
  }
  else
  {
      cout<<"False"<<endl;
  }


    return 0;
}

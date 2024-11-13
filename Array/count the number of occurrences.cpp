/*
count the number of occurrences of a specific element in an array of integers.
*/



#include<iostream>
using namespace std;


int countOccurrence( int a[], int n, int target)
{
    int cnt = 0;
    for( int i = 0; i < n; i++)
    {
       if( a[i] == target)
    {
        cnt++;
    }

     }

     return cnt;
}
int main()
{
  int n;
  cin>>n;

 int a[n]; //array size user defined

 for( int i = 0; i < n; i++)
 {
     cin>>a[i]; ///take each element user input of array
 }

 int target;
 cin>>target;

 int occurances = countOccurrence( a,n,target);
 cout<<occurances<<endl;




    return 0;
}

/*
tc = O(N)
*/

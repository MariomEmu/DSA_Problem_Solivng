#include <iostream>
using namespace std;


  int sumArray( int a[], int i, int n)
  {
      //base case
      if( i > n ) return 0;

      return a[i] + sumArray(a, i+1,n);  ///Functional Recursion
  }



int main(){
    int n;
    cin>>n;

    int a[n];
    for( int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int totalSum = sumArray( a, 0, n-1 );

    cout<<totalSum<<" ";


    return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define precision(n) cout << fixed << setprecision(n)

int main()
{
  ///input size of array
  int n;
  cin>>n;

  ///Declaring array

  int arr[n];

  ///taking input element in array
  for(int i = 0; i < n; i++)
  {

      cin>>arr[i];
  }

  ///reverse array logic

  int l = 0;
  int r = n - 1;

  while( l < r)
  {
      swap( arr[l] , arr[r]);
      l++;
      r--;
  }

  ///print output  array

  for(int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
}

///TC= O(n)
///SC = O(1)







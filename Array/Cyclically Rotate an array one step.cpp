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


  ///store the last element in temp
  int temp_lastEle = arr[n-1];

  ///Move the all element by one step right
    for(int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }


  ///copy the last element from temp

  arr[0] = temp_lastEle;

  ///print output  array

  for(int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
}

TC = o(n)
SC = O(1)









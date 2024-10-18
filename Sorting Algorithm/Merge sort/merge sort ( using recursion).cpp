#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    ///low to mid
    ///mid + 1 to high
    vector<int>temp;
    int left = low;
    int right = mid + 1;

    ///sorting elements in the temporary array sorted manner

    while( left <= mid && right <= high )
    {
        if( arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

      /// if elements on the left half are still left
      while(left <= mid)
      {
          temp.push_back(arr[left]);
            left++;
      }
    ///  if elements on the right half are still left

    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

   /// transfering all elements from temporary to arr

  for(int i = low; i <= high; i++)
  {
      arr[i] = temp[i - low];
  }
}


void mergeSort (vector<int> &arr, int low, int high)
{
   int mid = (low + high) / 2 ;
    if( low == high) return;
    mergeSort(arr, low , mid );
    mergeSort( arr, mid + 1, high);
    merge(arr, low, mid, high);
}



int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the element ";
    for( int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
      ///for visually verify that the sorting function is working correctly
      cout<<"Before sorting array"<<endl;
      for( int i = 0; i < n; i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;

    // Your sorting function call goes here
    mergeSort(arr, 0, n-1);

    cout<<"After sorting array: "<<endl;
    for( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}

/*TC = o(nlogn)
sc = o(n)
*/

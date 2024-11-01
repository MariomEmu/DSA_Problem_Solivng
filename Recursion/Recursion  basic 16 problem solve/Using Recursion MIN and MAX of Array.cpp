#include<iostream>
using namespace std;

/*int maxArray( int a[], int i, int n){

if( n == i ) return a[i];

 int max_rest = maxArray(a,i+1,n);

 return( a[i] > max_rest)? a[i] : max_rest; /// this is ternary loop
   ///If the condition is true, it returns a[i]
  ///If the condition is false, it returns max_of_rest


}
*/

 int minArray( int a[], int i, int n)
 {
     ///base case
     if( n == i) return a[i];

     int min_rest = minArray( a, i+1, n);
     return( a[i] < min_rest)? a[i] : min_rest;
 }


int main()
{
    int n;
    cin>>n;

    int a[n];

   /* for( int i = 0;  i< n; i++)
    {
        cin>>a[i];
    }

    int finalMax = maxArray( a, 0, n-1);
    cout<<finalMax<<endl;
  */

  for( int i = 0;  i< n; i++)
    {
        cin>>a[i];
    }

    int finalMin = minArray( a, 0, n-1);
    cout<<finalMin<<endl;

    return 0;
}




///both max min find parallelly

/*#include <iostream>
using namespace std;


int maxArray(int a[], int i, int n) {
    // Base case: if we reach the last element
    if (i == n) return a[i];
    // Recursive case
    int max_rest = maxArray(a, i + 1, n);
    return (a[i] > max_rest) ? a[i] : max_rest;
}


int minArray(int a[], int i, int n) {
    // Base case: if we reach the last element
    if (i == n) return a[i];

    // Recursive case
    int min_rest = minArray(a, i + 1, n);
    return (a[i] < min_rest) ? a[i] : min_rest; // Ternary operator for minimum
}

int main() {
    int n;
    cin >> n;

    int a[n];

    // Input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Calculate maximum
    int finalMax = maxArray(a, 0, n - 1);
    cout << "Maximum element: " << finalMax << endl;

    // Calculate minimum
    int finalMin = minArray(a, 0, n - 1);
    cout << "Minimum element: " << finalMin << endl;

    return 0;
}

*/


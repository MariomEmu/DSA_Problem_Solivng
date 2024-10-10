#include<bits/stdc++.h>
using namespace std;

int  fibonacci(int n)
{
    ///Base case
    if( n <= 1)
    {
        return n;
    }

    /// Problem broken down into 2 functional calls
   /// and their results combined and returned.
    int last = fibonacci( n - 1);
    int secendLast = fibonacci( n - 2);

    return last + secendLast;
}



int main()
{

    int n;
    cin>>n;
    /// Here, let’s take the value of N to be 4.
    cout<<fibonacci(n)<<endl;

    return 0;
}

/*Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls and so on which makes worst-case time complexity to be exponential in nature }.

Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack since we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) Fibonacci numbers before it }.
*/

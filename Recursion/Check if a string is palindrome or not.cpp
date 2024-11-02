#include <iostream>
using namespace std;


bool isPalindrom( int i, string& s)
{
     /// Base Condition
    /// If i exceeds half of the string means all the elements
    /// are compared, we return true.
     ///using 1 pointer

    if( i >= s.length()/2) {
        return true;
    }

   /// If the start is not equal to the end, not the palindrome.
    if( s[i] != s[s.length() - i - 1]) {
         return false;

    }

    /// If both characters are the same, increment i and check start+1 and end-1.
    return isPalindrom( i + 1, s);
}



int main()
{  string s;
   cin>>s;
   cout<<isPalindrom( 0, s)<<endl;
    return 0;
}


/*Time Complexity: O(N) { Precisely, O(N/2) as we compare the elements N/2 times and swap them}.

Space Complexity: O(1) { The elements of the given array are swapped in place so no extra space is required}.
*/

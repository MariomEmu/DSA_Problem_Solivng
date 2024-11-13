
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// Function to count the number of digits in n that evenly divide n
int evenlyDivides(int n) {

        int cnt = 0;
        int origindigit = n;

        while( n > 0)
        {
            int lastDigit = n % 10;
            n = n / 10;

         // Check if lastDigit is non-zero and divides originalN evenly
         if( lastDigit != 0 && origindigit % lastDigit == 0)
         {
                     cnt = cnt + 1;
         }

        }

        return cnt;
        // code here
    };


//{ Driver Code Starts.
int main() {

        int N;
        cin >> N;

        cout << evenlyDivides(N) << endl;




    return 0;
}
  /*TC = O(log10(n))
   sc = o(1)
   */


///another optimized way TC is O(1) , SC = o(1) in below which is just digit count not full same above part



#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



// Calculate the count of digits in 'n'
// using logarithmic operation log10(n) + 1.
int countDigits(int n){
    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = (int)(log10(n)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.

    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.

    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.

    // Return the count of digits in 'n'.
    return cnt;
}




int main() {
    int N = 329823;
    cout<< N << endl;
    int digits = countDigits(N);
    cout<< digits << endl;
    return 0;
}



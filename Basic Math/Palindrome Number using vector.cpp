#include<bits/stdc++.h>
using namespace std;

bool isPalindrome( int n)
{
    if( n < 0 ) return false;



    vector<int>vt;  ///create vector

    while( n > 0 )
    {
        vt.push_back(n%10); //store the extract value into vector
        n = n / 10;
    }

    vector<int>reverse_vt = vt;

     reverse(reverse_vt.begin(), reverse_vt.end());

    return ( reverse_vt == vt);




}

int main()
{
    int n;
    cin>>n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome." <<endl;
    } else {
       cout << n << " is not a palindrome." <<endl;
    }



    return 0;
}
/*
TC = O(log10(n))
*/

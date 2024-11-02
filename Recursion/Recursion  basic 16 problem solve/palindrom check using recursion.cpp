#include<iostream>
using namespace std;

bool palindrome(string &s, int start,int end)
{
    if( start >= end ) return true;
    if( s[start] != s[end]) return false; /// if this line is not work then call palindrome check the next
    return palindrome(s,start+1,end-1);

}

int main()
{
    string s;
    cin>>s;

    cout<<palindrome(s,0,s.length()-1);

    return 0;
}

/*
TC = o(n)
SC = o(n)
*/

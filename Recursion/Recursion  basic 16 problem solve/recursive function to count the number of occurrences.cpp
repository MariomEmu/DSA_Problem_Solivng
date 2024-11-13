/*
 C++ program to implement a recursive function to count the number of occurrences of a specific element in an array of integers.
 since this does not mention which type of array, an unsorted array is assumed.
*/


#include<iostream>
using namespace std;

int countOccurrence(int a[], int n, int target)
{

    ///base case
    if( n == 0) ///array is empty return 0
    {
        return 0;
    }

    if( a[0] == target)
    {
        return 1 + countOccurrence(a + 1, n - 1, target );
    }
    else
    {
        return countOccurrence( a + 1, n - 1, target);
    }
}


int main(){

int n;
cin>>n;

int a[n]; /// Define the array with user-specified size

for( int i = 0; i < n; i++)
{
    cin>>a[i]; /// Take each element as input
}

int target;
cin>>target;

int occurrence = countOccurrence( a,n,target );
cout<<occurrence<<endl;


return 0;




}

tc = o(N)

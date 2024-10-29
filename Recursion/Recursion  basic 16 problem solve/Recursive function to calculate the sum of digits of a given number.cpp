
#include <iostream>
using namespace std;

int digitSum(int n)
{
    ///base case
    if( n == 0) return 0;

    int  m = n % 10;
   return m + digitSum(n/10);  ///functional recursion
}

int main()
{
    int n;
    cin>>n;

    cout<<digitSum(n)<<" ";


    return 0;

}

/*TC = 0(d)
SC = o(d)
*/

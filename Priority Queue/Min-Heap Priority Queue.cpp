#include<iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of int
  // arranges elements in ascending order
  //its syntext
  priority_queue<int, vector<int>, greater<int>> nums;

  // add items to priority_queue
    int n;
    cin>>n;

    for( int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        nums.push(val); /// push o(logn)
    }



   cout<<"priority Queue: ";

   ///display all elements of numbers

   while( !nums.empty() )
   {
       cout<<nums.top()<<", ";
       nums.pop(); /// pop o(logn)
   }

   cout<<endl;

/*
Time Complexity: O(n log n) (for both insertion and display)
Space Complexity: O(n) (for storing the elements in the priority queue)
*/

  return 0;
}

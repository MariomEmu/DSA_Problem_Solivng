#include<bits/stdc++.h>
using namespace std;

/*
Notice that we have pushed elements in random order but when printing them we get the integers sorted in descending order: 20, 7, 1.

The top of the queue is the maximum element in the queue since priority_queue is implemented as max-heap by default.
*/

int main()
{
   ///create integer type priority queue
   priority_queue<int>numbers;

   ///add items to priority_queue
  /*
   numbers.push(1);
   numbers.push(20);
   numbers.push(8);
   */

   ///take element through loop
   int n;
   cin>>n;

   for( int i = 0; i < n; i++)
   {
       int val;
       cin>>val;
       numbers.push(val);
   }



   cout<<"priority Queue: ";

   ///display all elements of numbers

   while( !numbers.empty() )
   {
       cout<<numbers.top()<<", ";
       numbers.pop();
   }

   cout<<endl;


    return 0;
}


/*
Insertion time complexity: O(log n) (due to maintaining the heap property).
Accessing the top element: O(1) (since it’s always at the root of the heap).
*/

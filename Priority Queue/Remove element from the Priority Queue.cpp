
#include<bits/stdc++.h>
using namespace std;

///utility function to dislay priority queue
void display_priority_queue(priority_queue<int> pq) {
  while(!pq.empty()) {
    cout << pq.top() << ", ";
    pq.pop();
  }

  cout << endl;
}

int main()
{
  //create a queue of int
  priority_queue<int>nums;

  ///taking user input
  int n;
  cin>>n;

  for( int i = 0 ; i < n; i++)
  {
      int val;
      cin>>val;

      nums.push(val);
  }


   cout << "Initial Priority Queue: ";
  display_priority_queue(nums);

  // remove element from queue
  nums.pop();

  cout << "Final Priority Queue: ";
  display_priority_queue(nums);
    return 0;
}
/*

Inserting elements = (push()) takes O(n log n).
Displaying the queue = (display_priority_queue()) takes O(n log n).
Removing the top element = (pop()) takes O(log n).
Thus, the overall time complexity for this code is O(n log n).

*/







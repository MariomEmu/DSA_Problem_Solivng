#include<bits/stdc++.h>
using namespace std;

int main() {

  /// create a priority queue of int
  priority_queue<int> numbers;

  ///add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);

  /// get the element at the top
  int top = numbers.top();
  cout << "Top element: " << top;

  return 0;
}

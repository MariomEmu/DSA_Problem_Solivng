#include <iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of string
  priority_queue<string> lan;

  // add items to priority_queue
 /*
  languages.push("C++");
  languages.push("Python");
  languages.push("Java");
*/
         int n;
         cin>>n;

         for( int i= 0; i < n; i++)
         {
             string s;
             cin>>s;
            lan.push(s);
         }

  // get the size of queue o(1)
  int size = lan.size();
  cout << "Size of the queue: " << size;

  return 0;
}

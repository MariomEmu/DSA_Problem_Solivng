#include<bits/stdc++.h>
using namespace std;
#define SIZE 1001

int heap[SIZE];
int heapSize;

///Max Heapify

void heapify(int heap[], int i, int heap_size)
{
    int l,r,largest,temp;
    l = 2 * i + 1; ///left child
    r = 2 * i + 2;  ///right child

    if( l < heap_size && heap[l] > heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if( r < heap_size && heap[r] > heap[largest])
    {
        largest = r;
    }

    if( largest != i)
    {
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        heapify( heap, largest, heap_size);
    }


}
int heap_pop()
{
    if(heapSize <= 0)
    {
        cout<<"Heap Underflow\n";
        return -1;
    }

    int curr = 0; ///current index is 0 which is root(storing max element)
    int popped = heap[0]; ///save the element to be popped
    heap[0] = heap[heapSize - 1]; ///copy the last element to the root

    heapSize -= 1; ///Reduce heapSize by 1

    heapify( heap, 0, heapSize);


    return popped;

}

///for heap push element

void heap_push(int val)
{
    if(heapSize >= SIZE)
    {
        cout<<"Overflow\n";
        return;
    }

    heap[heapSize] = val; ///push 1st element to the end of heap
    int curr = heapSize;

    heapSize += 1;

    ///percolate up Algo
    while( curr > 0 && heap[(curr -1)/2] < heap[curr])
    {
        int temp = heap[(curr-1)/2];
        heap[(curr-1)/2] = heap[curr];
        heap[curr] = temp;

        curr = (curr-1)/2; ///current pointer move to the parent
    }
}


///Function to display the heap

void show_heap(){
 if(heapSize == 0)
 {
     cout<<"Heap is empty";
     return;
 }

 for( int i = 0; i < heapSize; i++)
 {
          cout<<heap[i]<<" ";
 }



 cout<<"\n";



}






void init()
{
    heapSize = 0;
}
int main()
{
    init();
    while(1)
    {
        cout<<"1:push...2:pop...3:show-Heap..4:Terminate\n";
        int option;
        int element;
        cin>>option;

        switch(option)
        {
            case 1:
                cout<<"Enter Element\n";
                cin>>element;
                heap_push(element);
                break;

            case 2:
                cout<<"Popped  "<<heap_pop()<<"\n";
                break;

            case 3:
                show_heap();
                break;
            case 4:
                exit(0);

            default:
                cout << "Invalid option. Please try again.\n";

        }
    }

    //return 0;
}

//https://www.geeksforgeeks.org/insertion-and-deletion-in-heaps/

/*
TC = o(nlogn)
sc = o(n)
*/


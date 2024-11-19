#include<bits/stdc++.h>
using namespace std;

///heapify algo

void heapify(vector<int>& heap, int i, int heap_size)
{
    int l,r, largest, temp;
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

    
    // Check if the right child exists and is greater than the largest so far
    if( r < heap_size && heap[r] > heap[largest])
    {
        largest = r;
    }

    // Swap and recursively heapify if the root is not the largest
    if( largest != i)
    {
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        heapify( heap, largest, heap_size);
    }
}

// Heap Sort algorithm
void heapSort(vector<int>& heap)
{
  // Step 1: Build Max-Heap

        int heap_size = heap.size();
    for( int i = heap_size/ 2 - 1; i >= 0; i--){


        heapify( heap, i, heap_size);
    }
    
    // Step 2: Extract max elements from heap one by one
    for(int i = heap.size() - 1; i > 0; i--)
    {
        int temp = heap[0]; ///swap heap root with last element
        heap[0] = heap[i];
        heap[i] = temp;

        
        // Call heapify on the reduced heap
        heapify( heap, 0, i); /// 0 index which is root and i is the current size of the heap
        
    }
}


int main()
{
    vector<int>heap{ 9,6,8,2,1,4,3};  // Input array

    heapSort(heap);

    cout<<"Heap in Ascending Order\n";

    for( int i = 0; i < heap.size(); i++)
    {
        cout<<heap[i]<<" ";
    }



    return 0;
}

/*

1. Build max heap = o(n)
2. extract elements = 0(n) for n - 1 size if heapify call then logn
3. heapify algo = 0(logn)

total Time complexity = o(nlogn)
space complexity = o(logn)

*/

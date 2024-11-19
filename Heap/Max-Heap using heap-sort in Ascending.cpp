#include<bits/stdc++.h>
using namespace std;

///heapify algo

void heapify(vector<int>& heap, int i, int heap_size)
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

void heapSort(vector<int>& heap)
{
    ///Build Heap for rearrange an array

        int heap_size = heap.size();
    for( int i = heap_size/ 2 - 1; i >= 0; i--){


        heapify( heap, i, heap_size);
    }



    ///extract max element

    for(int i = heap.size() - 1; i > 0; i--)
    {
        int temp = heap[0]; ///swap heap root with last element
        heap[0] = heap[i];
        heap[i] = temp;

        heapify( heap, 0, i); /// 0 index which is root and i is current size of heap
        ///heapify root with heapsize = i
    }
}


int main()
{
    vector<int>heap{ 9,6,8,2,1,4,3}; ///max heap

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
2. extract elemet = 0(n) for n - 1 size if heapify call then logn
3. heapify alfo = 0(logn)

total Time complexity = o(nlogn)
space complexity = o(logn)

*/

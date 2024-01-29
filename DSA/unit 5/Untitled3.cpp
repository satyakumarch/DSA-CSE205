#include <iostream>
#include <algorithm>

using namespace std;

/** Class D-ary Heap **/
class DaryHeap
{
    private:
        /** The number of children each node has **/
            int d;
                int heapSize;
       int capacity;
    int *heap;
                        
    /** Function to  get index parent of i **/
    int parent(int i)
    {
return (i - 1) / d;
        }
                                    
            /** Function to get index of k th child of i **/
                                            
  int kthChild(int i, int k)
                                                {
                                                            return d * i + k;
                                                }
                                                
                                                    /** Function heapifyUp  **/
                                                        void heapifyUp(int childInd)
                                                            {
                                                                        int tmp = heap[childInd];
                                                                        while (childInd > 0 && tmp < heap[parent(childInd)])
                                                                        {
                                                                        heap[childInd] = heap[parent(childInd)];
                                                                        childInd = parent(childInd);
                                                                        }
                                                                         heap[childInd] = tmp;
                                                            }
                                                            
                                                                /** Function heapifyDown **/
                                                                    void heapifyDown(int ind)
                                                                        {
                                                                        int child;
                                                                        int tmp = heap[ind];
                                                                        while (kthChild(ind, 1) < heapSize)                                                                      {
                                                                        child = minChild(ind);
                                                                        if (heap[child] < tmp)
                                                                            heap[ind] = heap[child];
                                                                            else
                                                                            break;
                                                                            ind = child;
                                                                            }
                                                                            heap[ind] = tmp;
                                                                        }
                                                                        
                                                                            /** Function to get smallest child **/
                                                                            int minChild(int ind)
                                                                            {
                                                                            int bestChild = kthChild(ind, 1);
                                                                            int k = 2;
                                                                            int pos = kthChild(ind, k);
                                                                            while ((k <= d) && (pos < heapSize))
                                                                            {
                                                                           if (heap[pos] < heap[bestChild])
                                                                            bestChild = pos;
                                                                             pos = kthChild(ind, k++);
                                                                            }
                                                                            return bestChild;
                                                                                    }
                                                                                    
                                                                                    public:
                                                                                        /** Constructor **/
                                                                                    DaryHeap(int capacity, int numChild)
                                                                                    {
                                                                                    heapSize = 0;
                                                                                    d = numChild;
                                                                                            this->capacity = capacity;
                                                                                            heap = new int[capacity];
                                                                                        fill(heap, heap + capacity, -1);
                                                                                        }
                                                                                                
                                                                                        /** Function to check if heap is empty **/
                                                                                        bool isEmpty()
                                                                                        {
                                                                                        return heapSize == 0;
                                                                                        }
                                                                                                            
                                                                                        /** Check if heap is full **/
                                                                                        bool isFull()
                                                                                        {
                                                                                        return heapSize == capacity;
                                                                                        }
                                                                                                                        
                                                                                        /** Function to clear heap **/
                                                                                        void clear()
                                                                                        {
                                                                                    heapSize = 0;
                                                                                        }
                                                                                                                                    
                                                                                                                            /** Function to insert element **/
                                                                                                                            void insert(int x)
                                                                                                                            {
                                                                                                                            if (isFull())
                                                                                                                            throw runtime_error("Overflow Exception");
                                                                                                                            /** Percolate up **/
                                                                                                                            heap[heapSize++] = x;
                                                                                                                        heapifyUp(heapSize - 1);
                                                                                                                                }
                                                                                                                                                
                                                                                                                            /** Function to find least element **/
                                                                                                                                int findMin()
                                                                                                                                {
                                                                                                                                if (isEmpty())
                                                                                                                                throw runtime_error("Underflow Exception");
                                                                                                                                    return heap[0];
                                                                                                                                    }
                                                                                                                                                            
                                                                                                                                /** Function to delete element at an index **/
                                                                                                                                int deleteElem(int ind)
                                                                                                                                    {
                                                                                                                                    if (isEmpty())
                                                                                                                                            throw runtime_error("Underflow Exception");
                                                                                                                                                int keyItem = heap[ind];
                                                                                                                                                        heap[ind] = heap[heapSize - 1];
                                                                                                                                                            heapSize--;
                                                                                                                                                        heapifyDown(ind);
                                                                                                                                                                return keyItem;
                                                                                                                                                            }
                                                                                                                                                                        
                                                                                                                                                            /** Function to print heap **/
                                                                                                                                                        void printHeap()
                                                                                                                                                        {
                                                                                                                                                    cout << "Heap = ";
                                                                                                                                                    for (int i = 0; i < heapSize; i++)
                                                                                                                                                    cout << heap[i] << " ";
                                                                                                                                                    cout << endl;
                                                                                                                                                    }
                                                                                                                                                                                    
                                                                                                                                                    /** Destructor **/
                                                                                                                                                ~DaryHeap()
                                                                                                                                                                 delete[] heap;
                                                                                                                        }
};

/** Class DaryHeapTest **/
int main()
{
        int i, size, d;
        cin >> size >> d;
                /** Make object of DaryHeapHeap **/
        DaryHeap dh(size, d);
                    
         for (i = 0; i < size; i++)
         {
        int num;
        cin >> num;
        dh.insert(num);
        }
                            
        dh.printHeap();
                                
        return 0;
}

  


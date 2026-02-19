#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){
        while(index>0){
            // find the parent
            int parent = (index-1)/2;
            
            // if current node > parent => swap.
            if(heap[index] > heap[parent]){
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else break;
        }
    }
    void insert(int val){
        heap.push_back(val);
        bubbleUp(heap.size()-1);
    }

    void bubbleDown(){
        int i = 0;
        int size = heap.size();
        while(i<size){
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;
            if(left < size && heap[left] > heap[largest])
                largest = left;
            if(right < size && heap[right] > heap[largest])
                largest = right;
            
            if(largest!=i){
                swap(heap[i], heap[largest]);
                i = largest;
            }
            else break;
        }
    }
    void deleteHeap(){
        if(heap.size()<1) return;
        bubbleDown();
    }
};

void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void maxHeap(vector<int> &arr, int n){
    for(int i = n/2;i>=0;i--){
        heapify(arr, n, i);
    }
}

int main(){
    vector<int> arr = {10, 3, 5, 30, 2, 8, 15};
    int n = arr.size();
    cout << "Original Array" << endl;
    for(int i:arr)
        cout << i << " ";
    cout << endl;
    maxHeap(arr, n);
    cout << "Max Heap Array" << endl;
    for(int i:arr)
        cout << i << " ";
    cout << endl;
    return 0;
}
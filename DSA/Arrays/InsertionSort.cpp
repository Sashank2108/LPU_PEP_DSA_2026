#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i=1;i<n-1;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    vector<int> arr = {11, 5, 7, 2, 3};
    int size = arr.size();
    insertionSort(arr, size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

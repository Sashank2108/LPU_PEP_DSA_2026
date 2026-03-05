#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;
    isSorted(arr+1, size-1);
}

bool isSorted(int arr[], int size, int left, int right){
    if(right==size) return true;
    if(arr[left]>arr[right]) return false;
    isSorted(arr, size, left+1, right+1); 
}

int sum(int arr[], int size){
    if(size==1) return arr[0];
    return arr[0] + sum(arr+1, size-1); 
}

int main(){
    // cout << "Hello, World!";
    // int a = 5;
    // int* ptr = &a;
    // (*ptr)++;
    // cout << a; 

    



    // int arr[] = {1, 3, 5, 7, 9};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // // if(isSorted(arr, size, 0, 1))
    // //     cout << "Array is Sorted";
    // // else cout << "Array is not sorted";
    // int s = sum(arr, size);
    // cout << "Sum of the elements in the array is: " << s << endl;




    
    
}
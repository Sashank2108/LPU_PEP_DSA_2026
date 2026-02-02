#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key && key>5) return 2*key;
    }
    return key/2;
}

int binarySearch(int arr[], int key, int size){
    int low = 0, high = size-1;
    while(low<=high){
        int mid = (high+low) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int firstOccurance(int arr[], int key, int size){
    int low = 0, high = size-1, res = -1;
    while(low<=high){
        int mid = (high+low) / 2;
        if(arr[mid] == key){ high = mid-1; res = mid;}
        else if(arr[mid] > key) high = mid-1;
        else low = mid+1;
    }
    return res;
}

int lastOccurance(int arr[], int key, int size){
    int low = 0, high = size-1, res = -1;
    while(low<=high){
        int mid = (high+low) / 2;
        if(arr[mid]==key){
            res = mid;
            low = mid+1;
        }
        else if(arr[mid]<key) low = mid+1;
        else high = mid-1;
    }
    return res;
}

int main(){
    // int arr[5] = {3, 1, 6, 4, 2};
    // int key = 15;
    // int arr[] = {2, 4, 5, 7, 8, 10, 12, 15, 20};
    // int res = binarySearch(arr, key, 9);

    // int res = linearSearch(arr, key, 5);

    // if(res!=-1)
    //     cout << "The element is present at index: " << res << endl;
    // else cout << "The element is not present in the array";

    int key = 2;
    int arr[] = {1, 2, 2, 2, 3, 3, 5, 6, 7, 8};
    int res = lastOccurance(arr, key, 10);
    if(res!=-1)
        cout << "The first occurance of the element is present at index: " << res << endl;
    else cout << "The element is not present in the array";

    return 0;
}


// for i in range(10):
    // print("Hello, World!")

// for(int i=0;i<10;i++){
//      cout << "Hello, World!";
// }

// for(int i=0;i<10;i++){
//      System.out.println("Hello, World!");
// }

// for(int i=0;i<10;i++){
//      printf("Hello, World!\n");
// }

// for(let i=0;i<10;i++){
//      console.log("Hello, World!");
// }


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

    



    // Is string is palindrome or not
    /*string str = "A man, a plan, a canal: Panam";
    int i = 0, j = str.length()-1;
    bool palindrome = true;
    while(i<j){
        while(!isalnum(str[i])) i++;
        while(!isalnum(str[j])) j--;
        if(tolower(str[i]) != tolower(str[j])){ 
            palindrome = false;
            break;
        }
        i++; j--;
    }
    if(palindrome)
        cout << "The String is Palindrome";
    else cout << "The String is not a Palindrome";*/

    // int arr[] = {1, 3, 5, 7, 9};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // // if(isSorted(arr, size, 0, 1))
    // //     cout << "Array is Sorted";
    // // else cout << "Array is not sorted";
    // int s = sum(arr, size);
    // cout << "Sum of the elements in the array is: " << s << endl;

    // 2-D Array
    int arr[4][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {3,2,7,8,3}, {6,2,1,6,3}};
    int row = 4, col = 5;
    // int maxCol = INT8_MIN;
    // int index = -1;
    // for(int i = 0;i < 5;i++){
    //     int sum = 0;
    //     for(int j=0;j<4;j++){
    //         sum+=arr[j][i];
    //     }
    //     if(sum>maxCol){
    //         maxCol = sum;
    //         index = i;
    //     }
    // }
    // cout << index << endl;

    // wave print in 2D Array
    /*for(int col=0;col<5;col++){
        for(int row=0;row<4;row++){
            if(col%2!=0)
                cout << arr[4-row-1][col] << " ";
            else cout << arr[row][col] << " ";
        }
    }*/

    // Spiral Print
    int topRow = 0, bottomRow = row-1, leftCol = 0, rightCol = col-1;
    // while(topRow<=bottomRow && leftCol<=rightCol){
    //     for(int i=leftCol;i<=rightCol;i++){
    //         cout << arr[topRow][i] << " ";
    //     }
    //     topRow++;
    //     for(int i=topRow;i<=bottomRow;i++){
    //         cout << arr[i][rightCol] << " ";
    //     }
    //     rightCol--;
    //     for(int i=rightCol;i>=leftCol;i--){
    //         cout << arr[bottomRow][i] << " ";
    //     }
    //     bottomRow--;
    //     for(int i=bottomRow;i>=topRow;i--){
    //         cout << arr[i][leftCol] << " ";
    //     }
    //     leftCol++;
    //     for(int i=leftCol;i<=rightCol;i++){
    //         cout << arr[topRow][i] << " ";
    //     }
    //     topRow++;
    //     for(int i=topRow;i<=bottomRow;i++){
    //         cout << arr[i][rightCol] << " ";
    //     }
    //     rightCol--;
    //     for(int i=rightCol;i>=leftCol;i--){
    //         cout << arr[bottomRow][i] << " ";
    //     }
    //     bottomRow--;
    // }
    
}
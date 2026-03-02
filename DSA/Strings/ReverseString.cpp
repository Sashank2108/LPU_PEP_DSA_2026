#include<bits/stdc++.h>
using namespace std;

void reverseString(string str){
    int n = str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i], str[n-i-1]);
    }
    // int i = 0, j = str.size()-1;
    // while(i<j){
    //     char c = str[i];
    //     str[i] = str[j];
    //     str[j] = c;
    // }
    cout << str;
}

int main(){
    string str = "asdfvoae";
    reverseString(str);
    return 0;
}
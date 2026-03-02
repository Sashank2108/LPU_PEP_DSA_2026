#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(string str){    
    int n = str.length();
    string newStr = "";
    for(int i=0;i<n;i++){
        if(newStr.find(str[i])==-1)
            newStr += str[i];
    }
    cout << newStr; 
}

int main(){
    string str = "HhHHeeelloooowW";
    removeDuplicates(str);
    return 0;
}

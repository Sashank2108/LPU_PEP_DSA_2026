#include<bits/stdc++.h>
using namespace std;

void isPalindrome(string str){
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
    else cout << "The String is not a Palindrome";
}

int main(){
    string str = "A man, a plan, a canal: Panam";
    isPalindrome(str);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int postfix(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9')
            st.push((s[i]-'0'));
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            if(s[i] == '+') st.push(op1 + op2);
            else if(s[i]== '-') st.push(op1 - op2);
            else if(s[i] == '*') st.push(op1 * op2);
            else if(s[i] == '/') st.push(op1 / op2);
            else if(s[i] == '^') st.push(pow(op1, op2));
        }
    }
    return st.top();
}

int main(){
    string str = "52*4+";
    int result = postfix(str);
    cout << "Result of The Expression is: " << result << endl;
    return 0;
}
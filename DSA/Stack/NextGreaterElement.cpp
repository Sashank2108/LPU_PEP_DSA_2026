#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i])
            st.pop();
        if(st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr = {4, 5, 10, 2, 8};
    vector<int> res = nextGreater(arr);
    for(int i=0;i<res.size();i++)
        cout << res[i] << " ";
    cout << endl;
}
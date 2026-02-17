#include<bits/stdc++.h>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


// Right View of Tree
/*
vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
    if(root == nullptr) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode* front = q.front();
            q.pop();
            if(i == size-1)
                ans.push_back(front->data);
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
    return ans;
}
*/


// Left View of Tree
/*
vector<int> leftView(Node *root) {
    vector<int> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* front = q.front();
            q.pop();
            if(i==0)
                ans.push_back(front->data);
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
    return ans;
}
*/


// Top view of Tree
/*
vector<int> topView(Node *root) {
    vector<int> res;
    if(root == nullptr) return res;   
    map<int, int> topNode;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));
    while(!q.empty()){
        pair<Node*, int> front = q.front();
        q.pop();
        Node* node = front.first;
        int hd = front.second;
        if(topNode.find(hd) == topNode.end()){
            topNode[hd] = node->data;
        }
        if(node->left) q.push(make_pair(node->left, hd-1));
        if(node->right) q.push(make_pair(node->right, hd+1));
    }
    for(auto it:topNode){
        res.push_back(it.second);
    }
    return res;
*/

int main(){
    TreeNode* root = nullptr;
     return 0;
}
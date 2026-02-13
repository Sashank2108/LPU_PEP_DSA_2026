#include<bits/stdc++.h>
using namespace std;

/*
 Tree -> It is a non-linear, hierarchical data structure consisting of nodes connected by edges.
 Binary Tree -> A tree is a binary tree when every node has at most two children.

 Terminologies :-
    1. Leaf -> A node with no children.
    2. Internal Node -> A node which is not a leaf.
    3. Sibling Nodes -> The children of same parent. 
    4. Length of Path -> Length of path is 1 less than the number of nodes on the path.
    5. Ancestor & Descendents -> If there is path from node A to node B, then A is called an ancestor
                                 of B and B is called a descendents of A.
    6. Subtree -> Any node of a tree, with all of its descendents is a subtree.
    7. Level -> The level of the node referes to its distance from the root, the root of the tree has
                generally level 0.
    8. Height -> The maximum level in a tree determines its height. The height of a node in a tree is
                 the length of the longest path from that node to a leaf.
    9. Depth -> The depth of a node is the number of nodes along the path from the root to that node.

 Properties of Binary Tree :-
    1. If 'h' is the height of a binary tree => 
        a. Maximum number of leaves is 2^h.
        b. Maximum number of nodes is 2^(h+1) - 1.
    2. If a binary tree contains 'm' nodes at level 'l', it contains at most 2m nodes at level l+1.
    3. Since a binary tree can contain at most 1 node at level 0(root), it can contain at most 2^l 
       nodes at level 'l'.

 Types :-
    Full Binary Tree(FBT) -> A tree of height 'h' has all its leaves at level 'h', means all non leaf 
                             nodes of a FBT have two children, and the leaf node have no children.

    Complete Binary Tree -> All leaves are filled except the last level, the last level should be filled
                            from left to right.
*/

int main(){

}
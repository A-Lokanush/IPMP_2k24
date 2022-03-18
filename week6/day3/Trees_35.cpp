// bst to sum tree

// !Wrong output for some cases

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void initial(Node * node){
        if(node){
            if(node->left && node->right){
                 node->data = node->left->data + node->right->data;   
            } else {
                if(node->left){
                    node->data = node->left->data ;
                }
                if(node->right){
                     node->data = node->right->data;
                }
                if(!node->left && !node->right){
                    node->data = 0;
                }
            }
            initial(node->left);
            initial(node->right);
        }
        return;
    }
    void sumMore(Node * node){
        if(node){
            if(node->left && node->right){
                 node->data += node->left->data + node->right->data;   
            } else {
                if(node->left){
                    node->data = node->left->data ;
                }
                if(node->right){
                     node->data = node->right->data;
                }
            }
            sumMore(node->left);
            sumMore(node->right);
        }
        return;
    }
    void toSumTree(Node *node)
    {
        initial(node);
        sumMore(node);
    }
};

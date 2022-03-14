// binary tree is sum tree or not

/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    int sum(Node* root){
        if(root){
           return root->data + sum(root->left) + sum(root->right);   
        } else {
            return 0;
        }
    }
    bool nice(Node * root){
        if(root){
            if(root->left == NULL && root->right == NULL){
                return true;
            }
            if(root->data == sum(root) - root->data){
                return true && nice(root->left) && nice(root->right);
            } else {
                return false;
            }
        }
    }
    bool isSumTree(Node* root)
    {
        return nice(root);
    }
}; 

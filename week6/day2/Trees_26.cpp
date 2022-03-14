// inorder successor

/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
    vector<Node *> a;
    void inorder(Node* root){
        if(root){
            inorder(root->left);
            a.push_back(root);
            inorder(root->right);
        }
        return;
    }
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        inorder(root);
        for( int i = 0; i < a.size(); i++){
            if(a[i]){
                if(a[i]->data == x->data){
                    return a[i+1];
                }   
            }
        }
        return NULL;
    }
};

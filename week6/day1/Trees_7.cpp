/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
*/
class Solution
{
public:

    void populateNext(Node *root)
    {
        static Node* next = NULL;
        
        if(root==NULL){
            return;
        }
        populateNext(root->right);
        root->next = next;
        next = root;
        populateNext(root->left);
        
    }
};
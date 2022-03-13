// Connect nodes at same level using constant extra space
/*
struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */


class Solution
{
    public:
    queue<Node *> q;
    void bfs(Node* root){
        if(root == NULL){
            return;
        }
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            temp->nextRight = q.front();
        }
    }
    void connect(Node *root)
    {
        q.push(root);
        bfs(root);
        return;
    }    
      
};
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
public:
    queue<Node *> q;
    vector<int> a;
    void bfs(Node *node)
    {
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
            a.push_back(temp->data);
        }
    }
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        q.push(node);
        bfs(node);
        return a;
    }
};
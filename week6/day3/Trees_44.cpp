// Remove all nodes in a BST which lie on a path having sum less than k

Node *trim(struct Node *root, int sum) {

    if (root == NULL) return NULL;

    root->left = prune(root->left, sum - root->data);
    root->right = prune(root->right, sum - root->data);

    if (root->left==NULL && root->right==NULL)
    {
        if (root->data < sum)
        {
            free(root);
            return NULL;
        }
    }

    return root;
}

class Solution {
public:

    void SetNext(Node *current, Node *left)
    {
        while(current != nullptr)
        {
            left->next = current->right;
            left = left->next;
            current = current->next;

            if (current != nullptr)
            {
                left->next = current->left;
                left = left->next;
            }
        }
    }
    
    void connectRecursive(Node *current)
    {
        if (current->left == nullptr)
        {
            return;
        }

        SetNext(current, current->left);

       connectRecursive(current->left);

    }
    
    Node* connect(Node* root) {
        if (root == nullptr)
        {
            return root;;
        }
       connectRecursive(root);
        return root;
        
    }
};

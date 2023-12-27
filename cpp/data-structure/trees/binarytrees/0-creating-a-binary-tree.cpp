#include <iostream>
#include <queue>

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root;

void createAbinaryTree()
{
    Node *p, *t;
    int x;
    std::queue<Node *> q;
    std::cout << "Enter root value: ";
    std::cin >> x;
    root = new Node;
    root->data = x;
    root->left = root->right = nullptr;
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();

        std::cout << "Enter value for left child of" << p->data;
        std::cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->left = t->right = 0;
            p->left = t;
            q.push(t);
        }
        std::cout << "Enter value for right child of" << p->data;
        std::cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->left = t->right = 0;
            p->right = t;
            q.push(t);
        }
    }
}

void preorder(struct Node *p)
{
    if (p)
    {
        std::cout << p->data;
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(struct Node *p)
{
    if (p)
    {
        preorder(p->left);
        std::cout << p->data;
        preorder(p->right);
    }
}

void postorder(struct Node *p)
{
    if (p)
    {
        preorder(p->left);
        preorder(p->right);
        std::cout << p->data;
    }
}

int main(int argc, char const *argv[])
{
    createAbinaryTree();
    preorder(root);
    return 0;
}

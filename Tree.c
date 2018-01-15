struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int data)
{
    struct Node *node1 =(struct Node *)malloc(sizeof(struct Node));
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    return (Node);
}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    getchar();
    return 0;
}

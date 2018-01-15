#include<stdio.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
}tNode;
//for creating treenode;
tNode *createTreeNode(int data)
{
    tNode *root = (tNode *)malloc(sizeof(tNode));
    root->data = data;
    root->left = NULL;
    root->right =NULL;
    return root;
}
void insertAtBST(tNode **root,int data)
{
    tNode * troot = *root;
    tNode *newNode = createTreeNode(data);
    if(troot == NULL)
    {
        troot = newNode;
    }
    if(troot->left == NULL)
    {
        troot-> left = newNode;
    }
    if(troot->right==NULL)
    {
        troot->right = newNode;
    }
}
int main()
{
    //tNode *troot = NULL;
    tNode *root = NULL;
    insertAtBST(&root,13);
 /*   //tNode *newNode = createTreeNode(2);
    troot = createTreeNode(5);
    troot->left = createTreeNode(4);
    troot->right = createTreeNode(7);
   /* if(troot == NULL)
    {
        troot = createTreeNode(4);
        return;
    }
    if(troot->left==NULL)
    {
        troot->left = createTreeNode(3);
    }
    if(troot->right==NULL)
    {
        troot->right = createTreeNode(2);
    }*/
    printf("%d %d %d",root->data);//,troot->left->data,troot->right->data);
    return 0;
}

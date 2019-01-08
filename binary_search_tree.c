#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include <limits.h> 



struct bsnode 
{
    int data;
    struct bsnode* left;
    struct bsnode* right;
};



struct bsnode* preorder(struct bsnode* root)
{
    if(root==NULL)
        return NULL;
    
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

struct bsnode* inorder(struct bsnode* root)
{
    if(root==NULL)
        return NULL;
    
    preorder(root->left);
    printf("%d ",root->data);
    preorder(root->right);
}


struct bsnode* postorder(struct bsnode* root)
{
    if(root==NULL)
        return NULL;

    preorder(root->left);
    preorder(root->right);
    printf("%d ",root->data);
}

struct bsnode* createnode(int key)
{
    struct bsnode* nnode=(struct bsnode*)malloc(sizeof(struct bsnode));
    nnode->data=key;
    nnode->left=NULL;
    nnode->right=NULL;

    return nnode;
}

struct bsnode* insertnode(struct bsnode* root,int key)
{
    if(root==NULL)
        return createnode(key);
    if(key < root->data)
        root->left=insertnode(root->left,key);
    if(key > root->data)
        root->right=insertnode(root->right,key);
 
    return root;
}


struct bnode* even_node(struct bsnode* root)
{
    if (root!=NULL)
    {
        even_node(root->left);
        if(root->data % 2 == 0)
            printf("%d ",root->data);
        even_node(root->right);
    }
}


int main()
{
    struct bsnode* root=NULL;
    root=insertnode(root,50);
    insertnode(root,20);
    insertnode(root,40);
    insertnode(root,30);
    insertnode(root,10);
    insertnode(root,60);
    insertnode(root,70);

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    even_node(root);
    printf("\n");
}
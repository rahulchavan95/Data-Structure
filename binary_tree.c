#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include <limits.h> 


struct bnode
{
    int data;
    struct bnode* left;
    struct bnode* right;
};


struct bnode* createnode(int key)
{
    struct bnode* node=(struct bnode*)malloc(sizeof(struct bnode));
    node->data=key;
    node->left=NULL;
    node->right=NULL;
    return node;
}


struct bnode* preorder(struct bnode* root)
{
        if(root==NULL)
            return  NULL;
        printf("%d  ",root->data);
        preorder(root->left);
        preorder(root->right);
}



struct bnode* postorder(struct bnode* root)
{
        if(root==NULL)
            return  NULL;
        postorder(root->left);
        postorder(root->right);
        printf("%d  ",root->data);
}



struct bnode* inorder(struct bnode* root)
{
    if(root==NULL)
        return NULL;
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
}   



int is_mirrortree(struct bnode* root,struct bnode* root2)
{
    if(root==NULL && root2==NULL)
    {
        return 1;
    }
    if(root==NULL || root2==NULL)
    {
        return 0;
    }
    if(root->data==root2->data)
    {
        if(is_mirrortree(root->left,root2->right)&& is_mirrortree(root->right,root2->left))
        {
            printf("mirror tree\n");
        }
    }
    return 0;
}




struct bnode* mirror_tree(struct bnode* root)
{
    if(root)
    {
        //go to the left and right side of tree
        mirror_tree(root->left);
        mirror_tree(root->right);
        //swapping of nodes
        struct bnode* temp=root->left;
        root->left=root->right;
        root->right=temp;
    }

}



int height(struct bnode* root)
{   
    int h=0;
    if(root==NULL)
        return 0;
    int left=height(root->left);
    int right=height(root->right);

    if(left > right )
    {
         h=1+left;
    }
    
    else
    {
         h=1+right;
    }
    return h;
}

/*
struct bnode* ancestorsof_k(struct bnode* root,struct bnode* key)
{
    if(root!=NULL)
    {
        if(root->data==key->data)
        {
            return 1;
        }
        if(ancestorsof_k(root->left,key)||ancestorsof_k(root->right,key))
        {
            printf("%d  ",root->data);
            return 1;
        }
    return 0;
    }
} */


int sum(struct bnode* root)
{   
    if(root==NULL)
        return 0;
    int add=root->data+sum(root->left)+sum(root->right);
    return add;
}



int identical(struct bnode* root,struct bnode *root2)
{
    if(root==NULL && root2==NULL)
        return 1;
    if(root!=NULL && root2!=NULL)
    {
        return (root->data==root2->data &&
        identical(root->left,root2->left)&&
        identical(root->right,root2->right));
        
    }
    return 0;
}



int kth_level_nodes(struct bnode* root,int l)
{
    if(root==NULL)
        return 1;
    if(l==0)
        printf("%d ",root->data);

    kth_level_nodes(root->left,l-1);
    kth_level_nodes(root->right,l-1);
}



void printlevelorder(struct bnode* root)
{
    int h=height(root);
    printf("level wise \n");
    for(int i=0;i<h;i++)
    {
        kth_level_nodes(root,i);
        printf("\n");
    }
}



int count_leafs(struct bnode* root)
{
    if(root==NULL)
        return 0;
    if(root->left ==NULL && root->right==NULL)
        return 1;
    else   
        return count_leafs(root->left)+
        count_leafs(root->right);
}   


void print_leafs(struct bnode* root)
{
    if (root==NULL)
        return;
    if(root->left==NULL && root->right==NULL)
    {
        printf("%d  ",root->data);
    }
    if(root->left)
        print_leafs(root->left);
    if(root->right)
        print_leafs(root->right);

}       



int is_subtree(struct bnode* root,struct bnode* root2)
{
    if(root2==NULL)
        return 1;
    if(root==NULL)
        return 0;
    
    if(identical(root,root2))
        return 1;
    
    return(is_subtree(root->left,root2)||is_subtree(root->right,root2));

}



int findmax(struct bnode* root)
{
    if(root==NULL)
        return 0;
    
    int res=root->data;
    int lres=findmax(root->left);
    int rres=findmax(root->right);

    if(lres > res)
        res=lres;
    if(rres> res)
        res=rres;
    return res;

}


struct bnode* delete_tree(struct bnode* root)
{
    if(root==NULL)
        return NULL;
    delete_tree(root->left);
    delete_tree(root->right);

    free(root);
}

/* struct bnode* even_node(struct bnode* root)
{
    if (root!=NULL)
    {
        even_node(root->left);
        if(root->data % 2 == 0)
            printf("%d ",root->data);
        even_node(root->right);
    }
} */


struct bnode* even_node(struct bnode* root)
{
    if (root==NULL)
        return 0;
    if(root->data % 2 ==0)
        printf("%d ",root->data);
    even_node(root->left);
    even_node(root->right);
}



int main()
{
    struct bnode* root=createnode(10);
    root->left=createnode(20);
    root->right=createnode(30);
    root->left->left=createnode(40);
    root->left->right=createnode(50);
    root->right->left=createnode(60);
    root->right->right=createnode(70);
    //root->right->right->right=createnode(80);


    struct bnode* root2=createnode(10);
    root2->left=createnode(20);
    root2->right=createnode(30);
    root2->left->left=createnode(40);
    root2->left->right=createnode(50);
    root2->right->left=createnode(60);
    root2->right->right=createnode(70);

/*    
    printf("PREORDER = ");
    preorder(root2);
    printf("\n");
    
    
*/

    printf("PREORDER = ");
    preorder(root);
    printf("\n");
    printf("POSTORDER= ");
    postorder(root);
    printf("\n");
    printf("INORDER  = ");
    inorder(root);
    printf("\n");

    //int res=is_mirrortree(root,root2);
    
    //kth_level_nodes(root,2);
    //printf("\n");

    //ancestorsof_k(root,root->right->right->right);
    //printf("SUM= %d",sum(root));
/*
    if(identical(root, root2)) 
        printf("Both tree are identical\n"); 
    else
        printf("Trees are not identical\n");

    printlevelorder(root);
    int l=count_leafs(root);
    printf("leafs = %d\n",l);

    print_leafs(root);
    printf("\n");


    if(is_subtree(root,root2->right))
        printf("subtree\n");
    else    
        printf("not subtree\n");
    
*/
    printf("%d  \n",findmax(root));
    printf("\n");

    even_node(root);
    printf("\n");
/*
    int h=height(root);
    printf("HEIGHT= %d",h); 
    printf("\n");

    mirror_tree(root);
    printf("Mirror tree PREORDER = ");
    preorder(root);
    printf("\n");
*/

}
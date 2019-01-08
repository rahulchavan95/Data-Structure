#include<stdio.h>
//#define v 5



int add_edge(int v,int arr[][v],int src,int dest)
{
    arr[src][dest]=1;
    arr[dest][src]=1;
/*
    to print adjacency matrix of directed graph
    arr[src][dest]=1;
    
*/

/*
    to print adjacency matrix of undirected graph
    arr[src][dest]=1;
    arr[dest][src]=1;
    
*/
    
}


void print_adjmatrix(int v,int arr[][v])
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
int init(int v,int arr[][v])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            arr[i][j]=0;
        }
    }
}


int main()
{
    int v;
    printf("how many vertices\n");
    scanf("%d",&v);

    int adj_matrix[v][v];
    init(v,adj_matrix);
   // print_adjmatrix(int v,adj_matrix);

    add_edge(v,adj_matrix,0,1);
    add_edge(v,adj_matrix,0,2);
    add_edge(v,adj_matrix,0,3);   
    add_edge(v,adj_matrix,1,3);
    add_edge(v,adj_matrix,1,4);
    add_edge(v,adj_matrix,2,3);
    add_edge(v,adj_matrix,3,4);

    print_adjmatrix(v,adj_matrix);

}
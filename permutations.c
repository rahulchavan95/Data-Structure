#include<stdio.h>
#include<string.h>

void swap(char *c1,char *c2)
{
    int temp=*c1;
    *c1=*c2;
    *c2=temp;
}

void permutauions(char *s,int a,int n)
{
    int j;
    if(a==n)
    {
        printf("%s\n",s);
    }
    
    else
    {
        for(j=a;j<=n;j++)
        {
            swap((s+a),(s+j));
            permutauions(s,a+1,n);
            swap((s+a),(s+j));
        }
    }
    
}


int main()
{
    char str[10];
    int n;
    printf("enter string\n");
    scanf("%s",str);
    n=strlen(str);
    printf("all permutauions\n");

    permutauions(str,0,n-1);
}
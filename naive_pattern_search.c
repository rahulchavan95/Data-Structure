#include<stdio.h>

int len(char str[])
{
    int i=0,len=0;
    while(str[i]!='\0')
    {
        len++;i++;
    }
    return len;
}



void naive_search(char pat[],char txt[],int p,int t)
{
    int i,j;
    for(i=0;i<=t-p;i++)
    {
        for(j=0;j<p;j++)
        {
            if(txt[i+j]!=pat[j])
            {   
                break;
            }
        }
        if(j==p)
        {
                printf("pattern found at %d index\n",i);
        }

    }

}


int  main()
{
    //char txt[]="this is a text";
    //char pat[]="text";
    char txt[]="AABAACAADAABAAABAA";
    char pat[]="AABA";

    int p=len(pat);
    int t=len(txt);


    //printf("pattern= %d\n",p);
    //printf("text= %d\n",t); 

    naive_search(pat,txt,p,t);
    
}
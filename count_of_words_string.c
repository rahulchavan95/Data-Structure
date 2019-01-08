#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[]="rahul mahadev chavan";
    
    int i=0,len=0,wc=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    //printf("%d\n",len);

    for(i=0;i<=len;i++)
    {
        if(str[i]==' ' || str[i]=='\0' || str[i]=='\t')
        {
            wc++;
        }
    }
    printf("NO. of Words= %d\n",wc);
}
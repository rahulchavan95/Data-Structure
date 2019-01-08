#include<stdio.h>

int main()
{
    char str[]="rahul mahadev chavan";
    int i,j,k=0,c=0;
    int len=sizeof(str)/sizeof(str[0]);
    //printf("%d",len);

    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {   
            str[i]='\0';   
        }
      
    }
    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    //printf("%s",str);
    while(1)
    {
        i=0;
        j=len-1;
        
    }
    
    
    
    printf("\n"); 
    /* for(i=0;i<len;i++)
    {
    printf("%c",str[i]);
    } */
}
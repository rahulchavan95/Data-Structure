#include<stdio.h>

int main()
{
    char str[]="rahul mahadev chavan";
    int i,j,k=0,c=0;
    int len=sizeof(str)/sizeof(str[0]);
  

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
   
    printf("\n"); 
   
}

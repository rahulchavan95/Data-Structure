#include<stdio.h>
#include<stdlib.h>

void swap(char** c,char** d)
{
    
        char *temp=*c;
        *c=*d;
        *d=temp;
    
}



int main()
{
    char str[]="rahul mahadev chavan";
    int len=0;
    int i=0;
    char* c,*d,*m;
    //printf("%s ",str);
   
    //printf("\n");
    while(str[i]!='\0')
    {   i++;
        len++;
    }      
    //printf("%d",len);
    for(i=0;i<len;i++)
    {
        c=str;
    
        if(str[i]==' ')
        {
            
            str[i]='\0';
            d=&str[i+1]; 
            //c=&str[i]+1;
            //printf("%s ",c);
            
        } 
    }
   
    
        //printf("%s",d);
    
    
    printf("%s\n",c);
    printf("%s\n ",d);
    swap(&c,&d);
    printf("%s\n",c);
    
    printf("%s\n ",d);
    //printf("%s ",str);
    
    
}
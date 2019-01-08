#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[]="rahul mahadev chavan";
    
    
    int len=strlen(str),i=0;
    int c=0;
   //printf("%s",str);
   for(i=0;i<len;i++)
   {
       
       if(str[i]!=' ')
       {
           printf("c=%c  i=%c\n",str[c],str[i]);   
           str[c]=str[i]; 
            c++;
       }
      
   }
   str[c]='\0';
   printf("%s",str);
   printf("\n");

   
}
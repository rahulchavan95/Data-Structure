#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
   char str[]="mukeshm";
   int a[26]={0};
   int c=0,k=0;
   int i;
    printf("%s\n",str);
   int len=strlen(str);
   int len2=sizeof(a)/sizeof(a[0]);

   for(i=0;i<len2;i++)
   {
       a[str[i]-'a']++;
       
   }
   for(i=0;i<len2;i++)
        printf("%d",a[i]);
   
   printf("\n");
   for(i=0;i<len2;i++)
   {    
       k=str[i]-'a';
       //printf("k=%d str=%c\n",k,str[i]);
       if(a[k]==1)
       {
          //printf("(%d a=%d\t)",k,a[k]);
            c=k;
          break;
       }
        
   }
    printf("\nfirst non repeating character= %c\n",c+'a');

   
}

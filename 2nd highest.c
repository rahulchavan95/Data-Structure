#include<stdio.h>

int main()
{
    int a[]={300,151,150,190,1,100,1153,500,800};

    int n=sizeof(a)/sizeof(a[0]);
    int fst=0,i;
    int snd=0;
    for(i=0;i<n;i++)
    {
         if(fst<a[i])
        {  
            snd=fst;
            fst=a[i];   
        }

        if(a[i]<fst && a[i]>snd)
        {
            snd=a[i];
        }    
    }
   
    printf("highest=%d\n",fst);
    printf("2nd_highest=%d\n",snd);
}
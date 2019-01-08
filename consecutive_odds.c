#include<stdio.h>
#include<stdlib.h>
#define max 100

int main()
{
    int n,avg=0,i=0,temp=0,temp1=0,cnt=0,s=0,start=0,end=0;
    //printf("how many elements\n");
    //scanf("%d",&n);
    int a[]={3,9,36,62,121,65,21,370,660,6,-1};
    n=sizeof(a)/sizeof(a[0]);

    /* for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
            break;
    }  */
    //3 9 36 62 121 65 21 370 660 6 -1

    for(i=0;i<n;i++)
    {
        if(a[i] % 2==1 )
        {   
            cnt++;  
        }
        else
            cnt=0;
        
        printf("cnt=%d\n",cnt);
        printf("temp=%d\n",temp);
        temp1=cnt;
        if(cnt >= temp)
        {   
            temp=cnt;
            if(temp > temp1)
                temp1=temp; 
            //printf("temp=%d\n",temp);

        }
    }
    //avg=a[start]+a[end]/2;  
    //printf("\navg=%d\n",avg);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        
    }
    printf("\n");
    printf("%d %d %d",s,start,end);

    printf("\nmax_odd_length= %d\n",temp);

    
}

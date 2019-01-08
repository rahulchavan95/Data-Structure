#include<stdio.h>

int main()
{
    //int arr[]={4,-3,-2,2,3,1,-2,-3,4,2,-6,-3,-1,3,1,2};
    int arr[]={-2, -5, 6, -2, -3, 1, 5, -6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,start=0,end=0,s=0;
    int max_so_far=arr[0];
    int max_ending_here=0;
    for(i=0;i<len;i++)
    {
        max_ending_here=max_ending_here+arr[i];

        if(max_ending_here > max_so_far)
        {
            max_so_far=max_ending_here;
            start=s;
            end=i;
        }

        if(max_ending_here < 0)
        {
            max_ending_here=0;
            s=i+1;
        }
    
    }

    for(i=start;i<=end;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("start= %d end= %d s=%d\n",start,end,s);
    printf("maxsum = %d\n",max_so_far);
}
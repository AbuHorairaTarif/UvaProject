#include<stdio.h>

int main()
{
    long arr[100000],i,min,max,mid,n=0,nn,m,playboy,height;
    scanf("%ld",&nn);
    scanf("%ld",&arr[n++]);

    for(i=1;i<nn;i++)
    {
        scanf("%ld",&height);
        if(height!=arr[n-1])
        arr[n++]=height;

    }

    scanf("%ld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%ld",&playboy);

        min=0;
        max=n-1;

        if(playboy>arr[n-1])
        {
            printf("%ld X\n",arr[n-1]);
            continue;
        }

        if(playboy==arr[n-1])
        {
            printf("%ld X\n",arr[n-2]);
            continue;
        }

        if(playboy<arr[0])
        {
            printf("X %ld\n",arr[0]);
            continue;
        }

        if(playboy==arr[0])
        {
            printf("X %ld\n",arr[1]);
            continue;
        }

        while(min+1!=max)
        {
            mid=(min+max)/2;

            if(arr[mid]==playboy)
            {
                min=mid-1;
                max=mid+1;
                break;
            }

            else if(playboy>arr[mid])
                min=mid;

            else if(playboy<arr[mid])
                max=mid;
        }
        printf("%ld %ld\n",arr[min],arr[max]);
    }

return 0;
}

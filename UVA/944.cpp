#include <stdio.h>
int num[100000];
int digit_square(int a)
{
    int res=0,b;
    while(a!=0)
    {
        b=a%10;
        a/=10;
        res+=(b%10)*(b%10);
    }
    return res;
}
int main()
{
    int i,j,k,l,h,temp,count=1,test=0;
    num[1]=1;
    for(i=2;i<=99999;i++)
    {
        temp=i;
        count=1;
        for(;;)
        {
            if(temp==1)
            {
                num[i]=count;
                break;
            }
            else if(temp<10)
            {
                if(temp!=1 && temp!=7)
                {
                    num[i]=-1;
                    break;
                }
            }
            else if(num[temp]!=0)
            {
                if(num[temp]==-1)
                    num[i]=-1;
                else
                    num[i]=num[temp]+count-1;
                break;
            }
            temp=digit_square(temp);
            count++;
        }
    }
    while(scanf("%d%d",&l,&h)==2)
    {
        if(test!=0)
            printf("\n");
        test=1;
        for(i=l;i<=h;i++)
        {
            if(num[i]!=-1)
                printf("%d %d\n",i,num[i]);
        }
    }
    return 0;
}

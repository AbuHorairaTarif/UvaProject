#include <stdio.h>
#define MAX 1000000
int self_num[MAX];
void genarator()
{
    unsigned long long int i,j,k,sum;
    for(i=0;i<=MAX;i++)
    {
        sum=i;
        j=i;
        while(j>=10)
        {
            sum+=j%10;
            j=j/10;
        }
        sum+=j;
        self_num[sum]=1;
    }
}

int main()
{
    genarator();
    unsigned long long int u;
    for(u=0;u<=MAX;u++)
    {
        if(self_num[u]==0) printf("%llu\n",u);
    }
    return 0;
}

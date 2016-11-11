#include <stdio.h>
int main()
{
    int n,m,counter,mod;
    while(scanf("%d",&n)==1)
    {
        m=1;
        counter=1;
        while(m!=0)
        {
            m=(m*10+1)%n;
            counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}

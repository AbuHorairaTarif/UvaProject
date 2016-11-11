#include <cstdio>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int step,mod;
    while(scanf("%d%d",&step,&mod)!=EOF)
    {
        printf("%10d%10d    ",step,mod);
        if(gcd(step,mod)==1)
            printf("Good Choice\n\n");
        else
            printf("Bad Choice\n\n");
    }
    return 0;
}

#include <cstdio>
#include <cmath>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b,c,d;
    double n;
    while(scanf("%d%d%lf",&a,&b,&n)!=-1)
    {
        int temp=gcd(a,b);
        a/=temp;
        b/=temp;
        int k=ceil(1/n);
        int m=k/b;
        if(m*b<k)
            m++;
        while(true)
        {
            temp=m*a+1;
            if(temp%b==0)
            {
                c=temp/b;
                d=m;
                break;
            }
            m++;
        }
        printf("%d %d\n",c,d);
    }
    return 0;
}

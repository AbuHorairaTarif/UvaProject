#include <stdio.h>
long long heap[21][21][21];
long long sum_in_range(long long st, long long ed, long long y, long long stz, long long edz)
{
    long long i, j, sum=0;
    for (i=st; i<=ed; i++)
        for (j=stz; j<=edz; j++) sum+=heap[i][y][j];
    return sum;
}
long long maximum(long long x, long long y)
{
    return x>y?x:y;
}
int main()
{
    long long i, j, k, l, m, n, sum, max, p;
    long long t;
    long long A=2, B=2, C=2;
    scanf("%lld", &t);

    while (t--){

    scanf("%lld%lld%lld", &A, &B, &C);

    for (i=0; i<A; i++) for (j=0; j<B; j++) for (k=0; k<C; k++) scanf("%lld", &heap[i][j][k]);
max=-1111111111111111111;
    for (l=0; l<A; l++)
    {
        for (m=l; m<A; m++)
        {
            for (n=0; n<C; n++)
            {
                for (k=n; k<C; k++)
                {
                    sum=0;
                    for(i=0; i<B; i++)
                    {
                        p=sum_in_range(l, m, i, n, k);
                        sum=maximum(sum+p, p);
                        max=maximum(max, sum);
                    }
                }
            }
        }
    }
    printf("%lld\n", max);
    if (t) printf("\n");
}
return 0;
}

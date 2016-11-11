#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int fib[46];
void calculateFib()
{
    fib[0] = 0,fib[1] = 1;
    int last = 1,counter = 2;
    for(int counter=2;counter<=45;counter++)
    {
        fib[counter] = fib[counter-1] + fib[counter-2];
    }
}

int main()
{
    calculateFib();
    int testCase;
    scanf("%d",&testCase);
    for(int i=1;i<=testCase;i++)
    {
        int input;
        scanf("%d",&input);
        printf("%d = ",input);
        int entered = 0,consec =0;

        for(int m = 45;m>=2;m--)
        {
            if(input>=fib[m]&&consec==0)
            {
                consec = 1;

                printf("1");
                input-=fib[m];
                entered = 1;
            }
            else if(entered==1)
            {
                printf("0");
                consec=0;
            }
        }
        printf(" (fib)\n");
    }
    return 0;
}

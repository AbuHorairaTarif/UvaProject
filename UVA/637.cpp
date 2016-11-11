#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int i,j,k,N,a;
    while(cin>>N&&N)
    {
        printf("Printing order for %d pages:\n",N);
        if(N==1)
        {
            printf("Sheet 1, front: Blank, 1\n");
            continue;
        }
        k=0,j=N,a=1;
        int n=(N%4)?(N/4+1):N/4,c=n*4-N;
        for(i=1;i<=n;i++)
        {
            int b=1,k=0;
            while(b<=2)
            {
                if(!k)
                {
                    if(c)
                    {
                        printf("Sheet %d, front: Blank, %d\n",i,a);
                        c--;
                    }
                    else {
                        printf("Sheet %d, front: %d, %d\n",i,j,a);
                        j--;
                    }
                }
                else {
                    if(c) {
                        printf("Sheet %d, back : %d, Blank\n",i,a);
                        c--;
                    }
                    else
                    {
                        printf("Sheet %d, back : %d, %d\n",i,a,j);
                        j--;
                    }
                }
                a++;
                k++;
                b++;
            }
        }
    }
    return 0;
}

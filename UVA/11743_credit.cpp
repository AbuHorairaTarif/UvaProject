#include <stdio.h>

int main()
{
    int ch[19];
    int sum_even, sum_odd, i, test,t;

    while(scanf("%d",&test)==1)
    {
        for(t=1; t<=test; t++)
        {
             sum_even=0;
             sum_odd=0;
            for(i=0; i<16; i++)
                    scanf("%1d", &ch[i]);

             for(i=0 ;i<16; i=i+2)
        {
            ch[i]*=2;
            if(ch[i]>=10)
                ch[i]=(ch[i]%10)+1;

            sum_even+=ch[i];
        }
        for(i=1; i<16; i=i+2)
            sum_odd+=ch[i];
        if((sum_even+sum_odd)%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
        }
    }
    return 0;
}

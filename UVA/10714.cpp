#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int test,len,num,pos,min,max,sub;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&len,&num);
        min = max =0;
        while(num--)
        {
            scanf("%d",&pos);
            sub=(len-pos);
            if(sub>=pos)
            {
                if(max<sub)
                {
                    max=sub;
                }
                if(min<pos)
                {
                    min=pos;
                }
            }
            if(sub<pos)
            {
                if(max<pos)
                {
                    max=pos;
                }
                if(min<sub)
                {
                    min=sub;
                }
            }
        }
        printf("%d %d\n",min,max);
    }
    return 0;
}

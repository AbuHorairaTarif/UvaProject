#include <stdio.h>
#include <string.h>

int main()
{
    int i,count,space;
    char a[1000];
    while(gets(a))
    {
        count=0;
        space=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(3)
                count++;
                space  =0;
            }
            else
            space=1;
        }
        printf("%d\n",count);
    }
    return 0;
}


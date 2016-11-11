#include <stdio.h>
#include <string.h>
int arr[10000],N,tn,blk=0;
char data[10000][100];
int main()
{
    char str[10],ch;
    scanf("%d",&N);
    getchar();
    while(N--)
    {
        gets(str);
        if(blk++)
            printf("\n");
        int cnt=0;
        while(1)
        {
            scanf("%d",&arr[cnt++]);
            ch=getchar();
            if(ch=='\n') break;
        }
        int i=0;
        while(1)
        {
            scanf("%s",&data[arr[i++]]);
            ch=getchar();
            if(ch=='\n') break;
        }
        for(i=1;i<=cnt;i++)
            printf("%s\n",data[i]);
    }
    return 0;
}

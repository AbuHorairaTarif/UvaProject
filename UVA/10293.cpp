#include<stdio.h>
int main()
{
    int a[32]={},count=0;
    char c;
    while(1)
        switch( (c= getchar()) ){
        case EOF: return 0;
        case '#':
            a[count]++;
            count = 0;
            while(++count <= 31)
                if(a[count]){
                    printf("%d %d\n",count,a[count]);
                    a[count] = 0;
                }
            putchar('\n');
            count = 0;
            break;
        case ' ':
        case '?':
        case '!':
        case ',':
        case '.':
        case '\t':
        case '\n':
            a[count]++;
            count = 0;
            break;
        case '-':
            if( (c=getchar()) != '\n')
               ungetc(c,stdin);
        case '\'':
            break;
        default:
            count++;
    }
    return 0;
}

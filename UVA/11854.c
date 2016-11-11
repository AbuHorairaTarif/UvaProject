#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,r;
    while(scanf("%d%d%d",&a,&b,&c)==3) {

        if(a==0 && b==0 && c==0)
            break;
        else {
        if(c==(sqrt((a*a)+(b*b))))
        printf("right\n");
        else if(b==(sqrt((a*a)+(c*c))))
        printf("right\n");
        else if(a==(sqrt((b*b)+(c*c))))
        printf("right\n");
        else printf("wrong\n");
    }

}
return 0;
}

#include<stdio.h>
int main()
{
int b,s,bl[10000],ss[10000],c=1,d,min,i,j;
while (1){
    scanf("%d%d", &b, &s);
    if (b==0 && s==0) break;
    for (i=0; i<b; i++){
        scanf("%d", &bl[i]);
    }
    for (j=0; j<s; j++){
        scanf("%d", &ss[j]);
    }
    if (b==s || s>b) printf("Case %d: 0\n", c);
    else {
        d= b-s;
        min=200;
        for (i=0; i<b; i++){
            if (min>bl[i]) min=bl[i];
        }
        printf("Case %d: %d %d\n", c, d, min);
    }
    c++;
}
return 0;
}

#include <stdio.h>
int main()
{
    int ct1,ct2,ct3,ct,t1,t2,fin,attend,total,grade,i,j,test;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&fin,&attend,&ct1,&ct2,&ct3);
        if(ct1>=ct2 && ct2<=ct3)
            ct=(ct1+ct3)/2;
        else if(ct1>=ct3 && ct3<=ct2)
            ct=(ct1+ct2)/2;
        else if(ct2>=ct1 && ct1<=ct3)
            ct=(ct2+ct3)/2;
        total=(ct+t1+t2+fin+attend);
        if(total >= 90)
            printf("Case %d: A\n",i);
        else if(total>=80 && total<90)
            printf("Case %d: B\n",i);
        else if(total>=70 && total<80)
            printf("Case %d: C\n",i);
        else if(total>=60 && total<70)
            printf("Case %d: D\n",i);
        else
            printf("Case %d: F\n",i);

    }
    return 0;
}

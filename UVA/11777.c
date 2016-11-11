#include <stdio.h>
int main()
{
    int term1,term2,fin,attend,ct_1,ct_2,ct_3,test,i,ct,total;
    scanf("%d",&test);{
            for(i=0;i<test;i++) {

        scanf("%d%d%d%d%d%d%d",&term1,&term2,&fin,&attend,&ct_1,&ct_2,&ct_3);
        if((ct_1>=ct_2 )&& (ct_2>=ct_3))
            ct=(ct_1+ct_2)/2;
        else if((ct_1>=ct_3)&&(ct_3>=ct_2))
            ct=(ct_1+ct_3)/2;
        else if((ct_2>=ct_1)&&(ct_1>=ct_3))
            ct=(ct_2+ct_1)/2;
        else if((ct_2>=ct_3)&&(ct_3>=ct_1))
            ct=(ct_2+ct_3)/2;
        else if((ct_3>=ct_1)&&(ct_1>=ct_2))
            ct=(ct_3+ct_1)/2;
        else
            ct=(ct_3+ct_2)/2;

            total=term1+term2+fin+attend+ct;


                if(total>=90)
                printf("Case %d: A\n",i+1);
            else if(total>=80 && total<90)
                printf("Case %d: B\n",i+1);
            else if(total>=70 && total<80)
                printf("Case %d: C\n",i+1);
            else if(total>=60 && total<70)
                printf("Case %d: D\n",i+1);
            else if(total<60)
                printf("Case %d: F\n",i+1);

            }
}
return 0;
}

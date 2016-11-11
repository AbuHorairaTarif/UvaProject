#include <stdio.h>
int main()
{
    int i,num,fir,sec,thi,fou,fiv,res,fin,test,six,sev;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&num);
        fir=num*567;
        sec=fir/9;
        thi=sec+7492;
        fou=thi*235;
        fiv=fou/47;
        six=fiv-498;
        fin=six/10;
        res=fin%10;
        if(res>=0)
        printf("%d\n",res);
        else printf("%d\n",-res);

}
return 0;
}

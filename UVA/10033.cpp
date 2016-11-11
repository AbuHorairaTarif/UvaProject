#include <bits/stdc++.h>
using namespace std;
int RAM[2000];
char ram[2000];
int regis()
{
    int re[10]={0},addr,b,s,g,num=0,cc=0;
    while(++num)
    {
        b=RAM[cc]/100;
        s=RAM[cc]%100/10;
        g=RAM[cc]%10;
        cc=(cc+1)%1000;
        if(b==1) return num;
        else if(b==2) re[s]=g%1000;
        else if(b==3) re[s]=(re[s]+g)%1000;
        else if(b==4) re[s]=(re[s]*g)%1000;
        else if(b==5) re[s]=re[g]%1000;
        else if(b==6) re[s]=(re[s]+re[g])%1000;
        else if(b==7) re[s]=(re[s]*re[g])%1000;
        else if(b==8) re[s]=RAM[re[g]]%1000;
        else if(b==9) RAM[re[g]]=re[s];
        else if(b==0)
        {
            if(re[g])
                cc=re[s];
        }
    }
}
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int count=0;
        memset(ram,0,sizeof(ram));
        memset(RAM,0,sizeof(RAM));
        int j=0;
        while(gets(ram)!=NULL)
        {
            if(!isdigit(ram[0]))
                break;
            sscanf(ram,"%d",&RAM[j++]);
        }
        cout<<regis()<<endl;
        if(t) cout<<endl;
    }
    return 0;
}

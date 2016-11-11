#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char zone1[10],zone2[10],_time[10],ap[10];
char region[100][10]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST",
"NDT","EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
int dif[100]={0,0,10,10,0,10,10,20,20,30,30,40,-40,-30,-35,-25,-50,-40,-60,-50,-70,-60,-80,-70,-100,-90,-80,100,110,
95,105,80};

void convert(char zone1[],char zone2[],int &h,int &m)
{
    int dif1,dif2;
    for(int i=0;i<100;i++)
        if(!strcmp(zone1,region[i]))
    {
        dif1=dif[i];
        break;
    }
    for(int i=0;i<100;i++)
        if(!strcmp(zone2,region[i]))
    {
        dif2=dif[i];
        break;
    }
    dif1=dif2-dif1;
    if(dif1%10==0)
        h+=dif1/10;
    else
    {
        h+=dif1/10;
        if(dif1<0)
            m-=30;
        else
            m+=30;
        if(m<0)
        {
            m+=60;
            h--;
        }
        else if(m>=60)
        {
            m-=60;
            h++;
        }
    }
    h=(h+24)%24;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int h,m;
        scanf("%s",_time);
        if(_time[0]=='m')
            h=m=0;
        else if(_time[0]=='n')
        {
            h=12;
            m=0;
        }
        else
            {
                scanf("%s",ap);
                sscanf(_time,"%d:%d",&h,&m);
                if(ap[0]=='a' && h==12)
                    h-=12;
                else if(ap[0]=='p' && h<12)
                    h+=12;
        }
        scanf("%s%s",zone1,zone2);
        convert(zone1,zone2,h,m);
        if(h==0&&m==0)
            puts("midnight");
        else if(h==12&&m==0)
            puts("noon");
        else{
            if(h==0)
                printf("12:%02d a.m.\n",m);
            else if(h<12)
                printf("%d:%02d a.m.\n",h,m);
            else if(h<13)
                printf("%d:%02d p.m.\n",h,m);
            else
                printf("%d:%02d p.m.\n",h-12,m);
        }
    }
    return 0;
}

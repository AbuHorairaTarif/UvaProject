#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int a[5000],b[5000],c[5000];
int main()
{
    int n,m,t;
    while(cin>>n>>m)
    {
        int h;
        h=n;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        int k=0,cont;
        t=n/m;
        n=n%m;
        cont=0;
        while(n)
        {
            if(b[n]==1) break;
            b[n]=1;
            c[cont]=n;
            a[cont++]=n*10/m;
            n=n*10%m;

        }cout<<h<<"/"<<m<<" = ";
        cout<<t<<".";
        for(int i=0;i<cont&&i<50;++i)
        {
            if(n!=0&&c[i]==n){k=i;printf("(");}
            printf("%d",a[i]);
        }if(n==0)printf("(0");
        if(cont>=50)printf("...");
        printf(")\n");
        if(n==0)cont=k+1;
        cout<<"   "<<cont-k<<" = number of digits in repeating cycle"<<endl;
        cout<<endl;
    }
    return 0;
}

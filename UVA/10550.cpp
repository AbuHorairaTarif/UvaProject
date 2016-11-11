#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,b,c,d,answer,temp;
    while(true)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)
            return 0;
        answer=2*360;
        temp=a-b;
        if(temp<=0)
            temp+=40;
        answer=answer+(temp*9)+360;
        temp=c-b;
        if(temp<=0)
            temp+=40;
        answer=answer+(temp*9);
        temp=c-d;
        if(temp<=0)
            temp+=40;
        answer=answer+(temp*9);
        cout<<answer<<endl;
    }
    return 0;
}

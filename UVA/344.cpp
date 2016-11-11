#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int i=0,v=0,x=0,l=0,c=0;
        for(int t=1;t<=n;t++)
        {
            int a=t;
            int f=a%10;
            a=a/10;
            if(a==1)x++;
            else if(a==2) x+=2;
            else if(a==3) x+=3;
            else if(a==4) {x++;l++;}
            else if(a==5) {l++;}
            else if(a==6) {x++;l++;}
            else if(a==7) {x+=2;l++;}
            else if(a==8) {x+=3;l++;}
            else if(a==9) {x++;c++;}
            if(f==1)i++;
            else if(f==2)i+=2;
            else if(f==3)i+=3;
            else if(f==4){i++;v++;}
            else if(f==5){v++;}
            else if(f==6){i++;v++;}
            else if(f==7){i+=2;v++;}
            else if(f==8){i+=3;v++;}
            else if(f==9){x++;i++;}
        }
        if(n==100)c++;
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c);
    }
    return 0;
}

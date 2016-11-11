#include <bits/stdc++.h>
using namespace std;
double area_of_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
    return 0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
}
int main()
{
    char ch,type[12],input[500];
    int cas =0,I=0,n;
    float ax[12],ay[12],bx[12],by[12],cx[12],cy[12],cr[12];
    for(n=0;;n++)
    {
        gets(input);
        if(input[0]=='*') break;
        else if(input[0]=='r')
        {
            sscanf(input,"r %f %f %f %f",&ax[n],&ay[n],&bx[n],&by[n]);
            type[n]='r';
        }
        else
        {
            sscanf(input,"c %f %f %f",&cx[n],&cy[n],&cr[n]);
            type[n]='c';
        }
    }
    float x,y;
    while(scanf("%f %f",&x,&y))
    {
        if(fabs(x-9999.9)< 1e-3 && fabs(y-9999.9) < 1e-3)
            break;
        else
        {
            double sumT=0;
            int c=0;
            cas++;
            for(int i=0;i<n;i++)
            {
                if(type[i]=='r')
                {
                    if(x>ax[i] && x<bx[i] && y<ay[i] && y>by[i])
                    {
                        c++;
                        printf("Point %d is contained in figure %d\n",cas,i+1);
                    }
                }
                else
                {
                    if(((x-cx[i])*(x-cx[i])+(y-cy[i])*(y-cy[i]))<=(cr[i]*cr[i]))
                    {
                        c++;
                        printf("Point %d is contained in figure %d\n",cas,i+1);
                    }
                }
            }
            if(c==0)
            {
                printf("Point %d is not contained in any figure\n",cas);
            }
        }
    }
    return 0;
}

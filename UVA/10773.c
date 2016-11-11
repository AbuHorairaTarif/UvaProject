#include <stdio.h>
#include <math.h>
int main()
{
    int c,i,k;
    float t1,t2,u,v,d,j;
       while(scanf("%d",&c)==1){
          for(i=0;i<c;i++)
            {
                scanf("%f%f%f",&d,&v,&u);
                if(u<=v || u==0 || v==0)
                {
                    printf("Case %d: can't determine\n",i+1);
}
                else{
                    t1=(d*1.0)/u;
                    t2=(d*1.0)/(sqrt(1.0*(u*u)-(v*v)*1.0));
                    j=(t2-t1)*1.0;
                    printf("Case %d: %.3f\n",i+1,j);
            }
          }
          return 0;
}
}

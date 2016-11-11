#include<stdio.h>
#include<math.h>

int prime(long int);
int rev(unsigned int);

int main()
{
    long int n,m;
    while(scanf("%ld",&n)==1)
    {
        if(prime(n)!=1)
            printf("%ld is not prime.\n",n);
        else
        {
            m=rev(n);
            if(prime(m)==1&&m!=n)
                printf("%ld is emirp.\n",n);
            else
                printf("%ld is prime.\n",n);
        }
    }

return 0;
}


    int prime(long int x)
    {
        int i;
        for(i=2;i*i<=x;i++)
        {
            if(x%i==0)
                return 0;
        }
        return 1;
    }



  int rev(unsigned int n)
  {
      unsigned int r=0;
      do
      {
         r=r*10+n%10;
      }
      while((n/=10)>0);

      return r;
  }

#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int T,l,i;
    char str[55];
    scanf("%d",&T);
    while(T--)
    {
       scanf("%s",str);
       l=strlen(str);
       bool val=true;
       for(i=0; i<l; i++)
       {
          if(str[i]!='?' && str[i]!='M' && str[i]!='E')
          {
             val=false;
             break;
          }
       }
       if(!val)
       {
          puts("no-theorem");
          //puts("here");
          continue;
       }
       int M=0,E=0;
       int posM,posE;
       for(i=0; i<l; i++)
       {
          if(str[i]=='M') {M++;posM=i;}
          else if(str[i]=='E') {E++;posE=i;}
       }
       if(M!=1||E!=1)
       {
          puts("no-theorem");
          continue;
       }
       if(posM+1>=posE || posM<=0 || posE>=l-1)
       {
          puts("no-theorem");
          continue;
       }

       if(2*posE==l)
          puts("theorem");

       else puts("no-theorem");
    }
    return 0;
}

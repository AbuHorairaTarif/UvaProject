# include <stdio.h>
# include <string.h>
# include <math.h>
int main()
{
    int i,n,test,j,k,len,p;
    char ch,str[10000],a[1000][1000];
   scanf("%d%c",&test,&ch);
   while(test--)
   {
      gets(str);
      len = strlen (str);
      p = sqrt(len);
      if(p*p==len)
      {
          for(i=0,j=0;str[i];)
          {
             for(k=0;k<p;k++)
             {

                 a[j][k] = str[i++];
             }
             j++;
          }
          for(i=0;i<p;i++)
          {
           for(j=0;j<p;j++)
           printf("%c",a[j][i]);

          }
           printf("\n");
      }
      else
      printf("INVALID\n");

   }
    return 0;
}

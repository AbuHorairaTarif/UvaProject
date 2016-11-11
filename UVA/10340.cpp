#include <stdio.h>
#include <string.h>
char str1[300000],str2[300000];
int main()
{
while(scanf("%s %s",str1,str2)!=EOF)
{
long long int i,j,k,g;
i=strlen(str1);
j=strlen(str2);
g=0;
for(k=0;k<j;k++)
if(str2[k]==str1[g])
g++;
if(g==i)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}

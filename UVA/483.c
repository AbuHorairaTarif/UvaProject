#include<stdio.h>
#include<string.h>
int main()
{
char str[1000],c;
int i;
while ( scanf("%s",&str)!=EOF )

{
c=getchar();

for( i=strlen(str)-1; i>=0; i-- )
{
printf("%c",str[i]);
}
putchar(c);
}
return 0;
}

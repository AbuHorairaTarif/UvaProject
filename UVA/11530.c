#include<stdio.h>
#include<string.h>

int main()
{
char ch[127];
int len,count,j,test,i=1;
scanf("%d",&test);
gets(ch);
while(i<=test)
{
gets(ch);
count=0;
len=strlen(ch);
j=0;
    while(j<len)
    {
    if((ch[j]=='a')||(ch[j]=='d')||(ch[j]=='g')||(ch[j]=='j')||(ch[j]=='m')||(ch[j]=='p')||(ch[j]=='t')||(ch[j]=='w')||(ch[j]==' '))
    count+=1;
        else if((ch[j]=='b')||(ch[j]=='e')||(ch[j]=='h')||(ch[j]=='k')||(ch[j]=='n')||(ch[j]=='q')||(ch[j]=='u')||(ch[j]=='x'))
    count+=2;
            else if((ch[j]=='c')||(ch[j]=='f')||(ch[j]=='i')||(ch[j]=='l')||(ch[j]=='o')||(ch[j]=='r')||(ch[j]=='v')||(ch[j]=='y'))
    count+=3;
                else if((ch[j]=='s')||(ch[j]=='z'))
    count+=4;
    j++;
}
printf("Case #%d: %d\n",i,count);
i++;
}
return 0;
}

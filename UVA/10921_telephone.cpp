#include <stdio.h>
#include <string.h>
int main(){
int i,j;
char ch[100],ch1[100];

while(gets(ch)){
i=strlen(ch);
for(j=0;j<i;j++){
if(ch[j]>='A' && ch[j]<='C')ch1[j]='2';
else if(ch[j]>='D' && ch[j]<='F')ch1[j]='3';
else if(ch[j]>='G' && ch[j]<='I')ch1[j]='4';
else if(ch[j]>='J' && ch[j]<='L')ch1[j]='5';
else if(ch[j]>='M' && ch[j]<='O')ch1[j]='6';
else if(ch[j]>='P' && ch[j]<='S')ch1[j]='7';
else if(ch[j]>='T' && ch[j]<='V')ch1[j]='8';
else if(ch[j]>='W' && ch[j]<='Z')ch1[j]='9';
else ch1[j]=ch[j];
}
for(j=0;j<i;j++){
printf("%c",ch1[j]);
}
printf("\n");
}
return 0;
}


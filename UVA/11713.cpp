#include <stdio.h>
#include <string.h>
int main()
{
    char s1[150],s2[150],ch1,ch2;
    int test,i,j,k,l,len1,len2,count;
    scanf("%d",&test);
    for(i=0;i<test;i++){
      scanf("%s",&s1);
      scanf("%s",&s2);
      len1=strlen(s1);
      len2=strlen(s2);


      if(len1!=len2)printf("No\n");
      else if(len1==len2){
          count=1;
       for(l=0;l<len2;l++){
       ch1=s1[l];
       ch2=s2[l];
       if( (ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u') && (ch2=='a'||ch2=='e'||ch2=='i'||ch2=='o'||ch2=='u')){}
       else {
        if(ch1==ch2){count=1;}
        else if(ch1!=ch2){
         count=0;
         break;
        }
       }
       }
       if(count==1)printf("Yes\n");
       else if(count==0)printf("No\n");
      }
    }
 return 0;
}

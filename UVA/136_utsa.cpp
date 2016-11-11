#include<stdio.h>
int main()
{
long int i,a,c;
    for(i=6,c=5;c<1500;i++)
    {   a=i;
        for(;a%2==0;){
           a=a/2;
        }
         for(;a%3==0;){
           a=a/3;
        }
         for(;a%5==0;){
           a=a/5;
        }
        if(a<5){
        c=c+1;
        }
        else continue;
    }
    printf("The 1500'th ugly number is %ld.",i-1);
}

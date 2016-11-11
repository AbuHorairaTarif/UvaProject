#include <cstdio>
#include <iostream>
using namespace std;
int friends[3][10001],solved[3][10001];
int main()
{
    int test,i,j,k,individual_solved,input,count1,count2,count3,max;
    cin>>test;
    for(i=0;i<test;i++)
    {
        printf("Case #%d:\n",i+1);
        for(j=0;j<3;j++)
        {
            cin>>individual_solved;
            for(k=0;k<individual_solved;k++)
            {
                cin>>input;
                friends[j][input]=input;
            }
        }
        count1=0;
        count2=0;
        count3=0;
        for(k=0;k<=10000;k++)
        {
            if(friends[0][k]!=0 && friends[1][k]==0 && friends[2][k]==0)
            {
                solved[0][count1]=friends[0][k];
                count1++;
            }
            else if(friends[0][k]==0 && friends[1][k]!=0 && friends[2][k]==0)
            {
                solved[1][count2]=friends[1][k];
                count2++;
            }
            else if(friends[0][k]==0 && friends[1][k]==0 && friends[2][k]!=0)
            {
                solved[2][count3]=friends[2][k];
                count3++;
            }
        }
        max=-1;
        if(max<count1) max=count1;
        if(max<count2) max=count2;
        if(max<count3) max=count3;
        if(max==count1)
        {
            printf("%d %d",1,max);
            for(k=0;k<max;k++)
                printf(" %d",solved[0][k]);
            printf("\n");
        }
        if(max==count2)
        {
            printf("%d %d",2,max);
            for(k=0;k<max;k++)
                printf(" %d",solved[1][k]);
            printf("\n");
        }
        if(max==count3)
        {
            printf("%d %d",3,max);
            for(k=0;k<max;k++)
                printf(" %d",solved[2][k]);
            printf("\n");
        }
        for(k=0;k<=10000;k++)
        {
            friends[0][k]=0;
            friends[1][k]=0;
            friends[2][k]=0;
        }
    }
    return 0;
}

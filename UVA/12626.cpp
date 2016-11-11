#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int i, test, len, count;
    int countM, countA, countR, countG, countI, countT;
    scanf("%d", &test);
    while(test--)
    {
        cin >> s;
        len=s.length();
        countM = countA = countR = countG = countI = countT =0;
        for(i=0; i<len; i++)
        {
            if(s[i]=='M')
            {
                countM++;
            }
            if(s[i]=='A')
            {
                countA++;
            }
            if(s[i]=='R')
            {
                countR++;
            }
            if(s[i]=='G')
            {
                countG++;
            }
            if(s[i]=='I')
            {
                countI++;
            }
            if(s[i]=='T')
            {
                countT++;
            }
        }
        count=0;
        while(1)
        {
            if(countA>=3 && countR>=2 && countG>=1 && countI>=1 && countT>=1 && countM>=1)
            {
                count=count+1;
                countA=countA-3;
                countR=countR-2;
                countG=countG-1;
                countI=countI-1;
                countT=countT-1;
                countM=countM-1;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

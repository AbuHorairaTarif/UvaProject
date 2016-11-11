#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int k;
        scanf("%d",&k);
        vector <int> sequence;
        for(int i=1;i<=k;i++)
            sequence.push_back(i);
        bool space=false;
        int input;
        for(int i=0;i<k;i++)
        {
            scanf("%d",&input);
            if(space) printf(" ");
            space=true;
            printf("%d",sequence[input]);
            sequence.erase(sequence.begin()+input);
        }
        printf("\n");
    }
    return 0;
}

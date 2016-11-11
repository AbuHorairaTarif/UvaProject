#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    char str[51];
    while(gets(str)&&(str[0]!='#'))
    {
        if(next_permutation(str,str+strlen(str)))
            printf("%s\n",str);
        else
            printf("No Successor\n");
    }
    return 0;
}

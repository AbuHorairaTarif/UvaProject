#include <iostream>
#include <map>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

map<string, string>dic;

int main()
{
    string english,foreign;
    char inp[100];
    char *ptr;
    while(gets(inp))
    {
        if(strlen(inp)==0) break;

        ptr=strtok(inp," ");
        english=ptr;
        ptr=strtok(NULL,"");
        foreign=ptr;
        dic[foreign]=english;
    }

    while(gets(inp))
    {
        foreign=inp;
        if(dic[foreign].length()==0)
        {
            printf("eh\n");
        }
        else{
            printf("%s\n",dic[foreign].c_str());
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(int argc,char const* argv[])
{
    int piles,stones,tmpStones;
    while(cin>>piles,piles)
    {
        stones =0;
        for(int i=1;i<=piles;i++)
        {
            cin>>tmpStones;
            stones^=tmpStones;
        }
        cout<<(stones?"Yes":"No")<<endl;
    }
    return 0;
}

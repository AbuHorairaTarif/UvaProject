#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <vector>
#include <stack>
#include <string>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#define pb push_back
#define MAX 1000000
using namespace std;
int main()
{
int N,val1,val2,temp;
while(scanf("%d",&N)&&N)
{
priority_queue< int, vector<int>, greater<int> > add;
for(int i=0;i<N;i++)
{
cin>>temp;
add.push(temp);
}
int result=0;
while(1)
{
val1=add.top();
add.pop();
if(add.empty())
break;
val2=add.top();
add.pop();
result+=(val1+val2);
add.push(val1+val2);
}
cout<<result<<endl;
}
return 0;
}

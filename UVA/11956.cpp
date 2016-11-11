#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	int a[100];
	int ncase;
	string str;
	int ks = 1;
	cin >> ncase;
	while(ncase--)
	{
		cin >> str;
		memset(a,0,sizeof(a));
		int p = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if(str[i] == '<') p = (p-1+100)%100;
			if(str[i] == '>') p = (p+1)%100;
			if(str[i] == '+') a[p] = (a[p]+1)%256;
			if(str[i] == '-') a[p] = (a[p]-1+256)%256;
		}
		printf("Case %d:",ks++);
		for(int i = 0; i < 100; i++)
		{
			printf(" %02X",a[i]);
		}
		puts("");
	}
	return 0;
}

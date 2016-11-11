#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<iostream>
#include<sstream>
using namespace std;
const int INF = 1e9;
const int MAXN = 120;
const int MAXS = 8;
using namespace std;
int t,m,n;
int c[MAXN + 10];
int st[MAXN +10];
int d[MAXN +10][(1 << MAXS) +10][(1 << MAXS) +10];
int dp(int i,int s0,int s1,int s2){
	if(i == m + n)
		return s2 == (1 << t) - 1 ? 0 : INF;
		int &ans = d[i][s1][s2];
		if(ans >= 0) return ans;
		ans = INF;
		if(i >= m)
			ans = dp(i + 1,s0,s1,s2);
		int m0 = st[i] & s0,m1 = st[i] & s1;
		s0 ^= m0; s1= (s1 ^ m1) | m0; s2 |= m1;
		ans = min(ans,c[i] + dp(i + 1,s0,s1,s2));
		return ans;
}
int main()
{
	int x;
	string s;
    while(getline(cin, s))
    {
        stringstream ss(s);
        ss >> t >> m >> n;
        if(!(t + m + n)) break;
		memset(st,0,sizeof(st));
		for(int i = 0; i < m + n; i++)
		{
			getline(cin, s);
			stringstream ss(s);
			ss >> c[i];
			while(ss >> x)
				st[i] |= (1 << (x-1));
		}
		memset(d, -1, sizeof(d));
		printf("%d\n",dp(0,(1 << t) - 1,0,0));
	}
return 0;
}

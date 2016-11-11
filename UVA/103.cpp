
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <iostream>
#include <algorithm>
using namespace std;
int dp[40], ans;
int n, m, a[35][15], path[35][35];
int max(int a, int b){
	return a < b ? b : a;
}
int judge(int *a, int *b){
	int i;
	sort(a, a + m);
	sort(b, b + m);
	for(i = 0;i < m;i ++)
		if(a[i] >= b[i])
			return 0;
	return 1;
}

void dfs(int t, int f){
	int i;
	if(f != ans)
		printf("%d ", t + 1);
	else printf("%d", t + 1);
	for(i = 0;i < n;i ++)
		if((dp[i] == dp[t] - 1) && path[t][i]){
			dfs(i, f + 1);
			break;
		}
}
int main()
{
	int i, j, k, t;
	while(scanf("%d%d", &n, &m) == 2){
		memset(path, 0, sizeof(path));
		memset(dp, 0, sizeof(dp));
		for(i = 0;i < n;i ++)
			for(j = 0;j < m;j ++)
				scanf("%d", &a[i][j]);
		for(i = 0;i < n;i ++)
			for(j = 0;j < n;j ++)
				if(judge(a[i], a[j]))
					path[i][j] = 1;
		for(k = 0;k < n;k ++)
			for(i = 0;i < n;i ++)
				for(j = 0;j < n;j ++)
					if(path[i][j] && (i != j))
						dp[i] = max(dp[j] + 1, dp[i]);
		for(i = 0, ans = INT_MIN;i < n;i ++)
			if(dp[i] > ans){
				ans = dp[i];
				t = i;
			}
		 if(n == 0){
			printf("0\n");
			continue;
		 }
		 printf("%d\n", ans + 1);
		 dfs(t, 0);
		 puts("");
	}
	return 0;
}

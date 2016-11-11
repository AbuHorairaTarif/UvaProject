#include <stdio.h>
#include <string.h>
bool judge(int ans1,int ans2) {
	char str[11];
	bool vis[10];
	int num;
	memset(vis,false,sizeof(vis));
	sprintf(str,"%05d%05d",ans1,ans2);
	for(int i = 0; i < 10; i++) {
		num = str[i] - '0';
		if(vis[num]) {
			return false;
		}
		vis[num] = true;
	}
	return true;
}
int main() {
	int n;
	int ans1,ans2;
	int cas = 0;
	while(scanf("%d",&n) != EOF && n) {
		if(cas++) {
			printf("\n");
		}
		bool flag = false;
		for(int i = 1234; i <= 100000; i++) {
			if(i % n == 0) {
				ans2 = i / n;
				if( judge(i,ans2) ) {
					flag = true;
					printf("%05d / %05d = %d\n",i,ans2,n);
				}
			}
		}

		if(!flag) {
			printf("There are no solutions for %d.\n",n);
		}
	}
	return 0;
}

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	char vow[10] = "AUEOI";
	char con[30] = "JSBKTCLDMVNWFXGPYHQZR";
	char odd[212],even[212];
	int t,Case,n,ecnt,ocnt,vcnt,ccnt,vp,cp;
	scanf("%d",&Case);
	for(t = 1; t <= Case; ++t){
		scanf("%d",&n);
		vp = cp = ecnt = ocnt = vcnt = ccnt = 0;
		for(int i = 1; i <= n; ++i){
			if(i & 1){
				odd[ocnt++] = vow[vp];
				++vcnt;
				if(vcnt >= 21){
					++vp;
					vcnt = 0;
				}
			}
			else{
				even[ecnt++] = con[cp];
				++ccnt;
				if(ccnt >= 5){
					++cp;
					ccnt = 0;
				}
			}
		}
		sort(odd,odd + ocnt);
		sort(even,even + ecnt);
		ocnt = ecnt = 0;
		printf("Case %d: ",t);
		for(int i = 1; i <= n; ++i){
			if(i & 1)
				printf("%c",odd[ocnt++]);
			else
				printf("%c",even[ecnt++]);
		}
		puts("");
	}
	return 0;
}

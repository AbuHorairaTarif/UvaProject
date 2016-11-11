#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;
char s[110];
int n;

double pri[256];


int main() {
	pri['C']=12.01;
	pri['H']=1.008;
	pri['O']=16.;
	pri['N']=14.01;
	int T;
	scanf("%d",&T);
	while(T--) {
		scanf("%s",s);
		n=strlen(s);
		double sum=0;
		for(int i=0;i<n;i++) {
			if(isdigit(s[i])) {
				char pre=s[i-1];
				int a=s[i]-'0';
				while(isdigit(s[++i]))a=a*10+s[i]-'0';
				i--;
				sum+=pri[pre]*(a-1);
			} else sum+=pri[s[i]];
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}

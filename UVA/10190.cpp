#include<stdio.h>
int a[1000000],l;
int main(){
	int n,m,i,flag;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n<=1||m<=1){printf("Boring!\n");continue;}
		l=0;flag=1;
		a[l++]=n;
		while(n!=1)
			if(n%m==0)
				a[l++]=n/=m;
			else{flag=0;break;}
			if(flag){
				for(i=0;i<l;i++){
					if(i!=0)
						printf(" ");
					printf("%d",a[i]);}
				printf("\n");
			}
			else
				printf("Boring!\n");
	}
	return 0;
}

#include <stdio.h>

int main(){
    int a,b,c,d,L,i;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5){

        if(a==0&&b==0&&c==0&&d==0&&L==0){
            break;
        }
        int counter=0;
        long ans=0;
        for(i=0;i<=L;i++){
            ans=a*(i*i)+b*i+c;
            if(ans%d==0)
                counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}

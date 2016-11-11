#include <stdio.h>

void printBinaryFormat(long long int number){
    long long int binary[25],i;
    long int index = 0;
    while(number > 0){
        binary[index++] = number%3;
        number = number/3;
    }
    for( i = index-1;i >= 0;i--){
        printf("%lld",binary[i]);
    }
    printf("\n");
}
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1){
            if(n<0)
            break;
            else if (n==0)
                printf("0\n");
    else printBinaryFormat(n);

}
return 0;
}


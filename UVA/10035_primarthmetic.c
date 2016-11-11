#include <stdio.h>

int main()
{   long int x,y;
    int carry;
    int add;
    while(scanf("%ld %ld",&x,&y)==2){

        carry=0;
        add=0;
        if(x==0 && y==0)
            break;
        while(x!=0 ||y!=0){
           if((x%10+y%10)+add>9){
                carry++;
                add=1;
           }
           else{
            add=0;
           }
           x/=10;
           y/=10;
        }
        if(carry==0){
            printf("No carry operation.\n");
        }
        else if(carry==1){
             printf("%d carry operation.\n",carry);
        }
        else{
            printf("%d carry operations.\n",carry);
        }
    }
       return 0;
}

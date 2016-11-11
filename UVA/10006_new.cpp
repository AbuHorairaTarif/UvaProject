#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int arr[20]={561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,
    46657,52633,62745,63973};
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        if(n==arr[0]||n==arr[1]||n==arr[2]||n==arr[3]||n==arr[4]||n==arr[5]||n==arr[6]||n==arr[7]||
           n==arr[8]||n==arr[9]||n==arr[10]||n==arr[11]||n==arr[12]||n==arr[13]||n==arr[14])
        printf("The number %d is a Carmichael number.\n",n);
      else printf("%d is normal.\n",n);
    }
    return 0;
}

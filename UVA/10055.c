#include <stdio.h>
int main (void)
{
	int long substract,num1,num2;
	int j;

	j:
		
		scanf("%ld %ld",&num1,&num2);
	{
		if(num1>num2) {
		
		substract=num1-num2;
		printf("%ld\n",substract);
	}
	else 
	{
		substract=num2-num1;
	printf("%ld\n",substract);
}
	goto j;
				

		}
		return 0;
}

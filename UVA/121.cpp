#include <stdio.h>
#include <math.h>
double  cos30;

int cal( double L, double H ){
	int i, j, k;
	double l,h;
	i=1;
	h = 1+cos30*(i-1);
	while( h <= H ){
		i++;
		h = 1+cos30*(i-1);
	}
	i--;

	j=(int) L;
	if( j==0 ) return 0;
	if( L-j>=0.5 ) return j*i;
	return i/2*(j-1) + (i+1)/2*j;
}

int main(){

	double a, b;
	int grid, skew1, skew2;
	cos30 = sqrt( 3 ) / 2;
	while( scanf("%lf %lf", &a, &b )!= EOF ){
		grid = (int)a * (int)b;
		skew1 = cal( a, b );
		skew2 = cal( b, a );
		skew1 = skew1>skew2 ? skew1:skew2;
		if( grid >= skew1  ){
			printf("%d grid\n", grid );
		}
		else{
			printf("%d skew\n", skew1);
		}
	}
	return 0;
}

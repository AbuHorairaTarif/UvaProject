#include <stdio.h>
int main ()
{
    int n,i,j;

    while ( scanf ("%d", &n) != EOF ) {
        int a [1000];

        for (i = 0; i < n; i++ )
            scanf ("%d", &a [i]);

        int count = 0;

        for ( i = 0; i < n; i++ ) {
            for ( j = i + 1; j < n; j++ )
                if ( a [i] > a [j] ) count++;
        }

        printf ("Minimum exchange operations : %d\n", count);
    }

    return 0;
}

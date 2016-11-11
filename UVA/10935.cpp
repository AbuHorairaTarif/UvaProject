#include <stdio.h>
#include <list>

using namespace std;

int main ()
{
    list <int> v;
    int n, i, flag, temp;

    while (scanf ("%d", &n)) {

        if (n == 0)
            return 0;
        v.clear ();

        for (i = n; i >= 1; i--)
            v.push_front(i);

        flag = 0;
        printf("Discarded cards:");

        while (v.size () > 1) {
            if (flag == 0) {
                temp = v.front ();
                printf(" %d", temp);
                v.pop_front ();
                flag = 1;
                temp = v.front ();
                v.push_back (temp);
                v.pop_front ();
            }

            else {
                temp = v.front ();
                printf(", %d", temp);
                v.pop_front ();
                temp = v.front ();
                v.push_back (temp);
                v.pop_front ();
            }
            if (v.size () == 1)
                printf("\n");
        }

        if (flag == 0)
            printf("\n");

        printf("Remaining card: %d\n", v.front ());
    }

    return 0;
}

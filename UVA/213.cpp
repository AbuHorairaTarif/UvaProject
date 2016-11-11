#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
const int N = 1000;
char s[N], key[8][1 << 8], c;
int val, len, l;

void read()
{
    len = 1; l = strlen (s);
    for (int i = val = 0; i < l; ++i)
        if (val < ( (1 << len) - 1))
            key[len][val++] = s[i];
        else
        {
            val = 0;
            key[++len][val++] = s[i];
        }
}

void print ()
{
    for (int i = val = 0; i < len; ++i)
    {
        do scanf ("%c", &c); while (!isdigit (c));
        val = val * 2 + (c - '0');
    }
    if (val >= ( (1 << len) - 1))  return;
    else
    {
        printf ("%c", key[len][val]);
        print();
    }
}

int main()
{
    int l1, l2, l3;
    while (gets (s) != NULL)
    {
        if (!s[0]) continue;
        memset (key, 0, sizeof (key));
        read();
        while (scanf ("%1d%1d%1d", &l1, &l2, &l3), len = 4 * l1 + 2 * l2 + l3)
            print ();
        printf ("\n");
    }
    return 0;
}

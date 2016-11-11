#include <cstring>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int mon[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int lm[] = {1,2,3,4,5,6,7,8,9,10,11};
int ld[] = {21,20,21,21,22,22,23,22,24,24,23};
int rm[] = {2,3,4,5,6,7,8,9,10,11,12};
int rd[] = {19,20,20,21,21,22,21,23,23,22,22};
char str[12][100] = {"aquarius","pisces","aries","taurus","gemini","cancer",
	"leo","virgo", "libra", "scorpio", "sagittarius", "capricorn"};

bool isleap(int x) {
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
		return true;
	return false;
}

bool cmp(int m, int d, int lm, int ld, int rm, int rd) {
	if (m < lm || (m == lm && d < ld))
        return false;
    if (m > rm || (m == rm && d > rd))
        return false;
    return true;
}

void work(int& y, int& m, int& d) {
	int tmp = mon[m];
	if (m == 2 && isleap(y)) tmp++;
	while (d > tmp) {
		d -= tmp; m++;
		if (m == 13) {
			m = 1; y++;
		}
		tmp = mon[m];
		if (m == 2 && isleap(y))
			tmp++;
	}
	printf("%02d/%02d/%02d ", m, d, y);
}

int main() {
	int test;
	char ch[100];
	scanf("%d", &test);
	int y, m, d;
	for (int cas = 1; cas <= test; cas++) {
		printf("%d ", cas);
		scanf("%s", ch);
		y = (ch[4]-'0')*1000+(ch[5]-'0')*100+(ch[6]-'0')*10+(ch[7]-'0');
		m = (ch[0]-'0')*10+(ch[1]-'0');
		d = (ch[2]-'0')*10+(ch[3]-'0');
		d += 280;
		work(y, m, d);
		int id = 11;
		for (int i = 0; i < 11; i++) {
			if (cmp(m, d, lm[i], ld[i], rm[i], rd[i])) {
				id = i;
				break;
			}
		}
		printf("%s\n", str[id]);
	}
	return 0;
}

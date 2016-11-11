#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

struct Team{
	char name[35];
	int points,games,wins,ties,losses,gsco,gaga;
}t[35];

char * Lowercase(char *p){
    char tname[35];
    for(int i = 0; ; ++i){
        if(p[i] >= 'A' && p[i] <= 'Z'){
            p[i] += ('a' - 'A');
        }
        tname[i] = p[i];
        if(p[i] == '\0') break;
    }
    return tname;
}

bool cmp(Team a,Team b){
	if(a.points != b.points)
		return a.points > b.points;
	else if(a.wins != b.wins)
		return a.wins > b.wins;
	else if((a.gsco - a.gaga) != (b.gsco - b.gaga))
		return (a.gsco - a.gaga) > (b.gsco - b.gaga);
	else if(a.gsco != b.gsco)
		return a.gsco > b.gsco;
	else if(a.games != b.games)
		return a.games < b.games;
	else
		return strcmp(Lowercase(a.name),Lowercase(b.name)) < 0;
}

int main(){
	char tour[105];
	int N,T,G;
	cin >> N;
	getchar();
	while(N--){
		//init
		memset(t,0,sizeof(t));
		memset(tour,0,sizeof(tour));
		scanf("%[^\n]",tour);
		getchar();
		cin >> T;
		getchar();
		for(int i = 0; i < T; ++i){
			scanf("%[^\n]",t[i].name);
			getchar();
		}
		cin >> G;
		getchar();
		while(G--){
			int g1,g2,t1,t2;
			char tem1[35],tem2[35];
			scanf("%[^#]#%d@%d#%[^\n]",tem1,&g1,&g2,tem2);
			getchar();
			for(int i = 0; i < T; ++i){
				if(strcmp(t[i].name,tem1) == 0)
					t1 = i;
				else if(strcmp(t[i].name,tem2) == 0)
					t2 = i;
			}
			t[t1].games++;
			t[t2].games++;

			t[t1].gsco += g1;
			t[t1].gaga += g2;

			t[t2].gsco += g2;
			t[t2].gaga += g1;

			if(g1 > g2){
				t[t1].points += 3;
				t[t1].wins++;

				t[t2].losses++;
			}
			else if(g1 < g2){
				t[t2].points += 3;
				t[t2].wins++;

				t[t1].losses++;
			}
			else{
				t[t1].points++;
				t[t1].ties++;

				t[t2].points++;
				t[t2].ties++;
			}
		}
		sort(t,t + T,cmp);
		printf("%s\n",tour);
		for(int i = 0; i < T; ++i){
			printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",i + 1,t[i].name,t[i].points,t[i].games,
					t[i].wins,t[i].ties,t[i].losses,(t[i].gsco - t[i].gaga),t[i].gsco,t[i].gaga);
		}
		if(N)
			puts("");
	}
	return 0;
}

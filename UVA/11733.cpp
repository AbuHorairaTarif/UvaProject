#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

vi pset(200005);
void initSet(int N)
{
    pset.assign(N, 0); for (int i = 0; i < N; i++) pset[i] = i;
}
int findSet(int i)
{
    return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) { pset[findSet(i)] = findSet(j); }

int main()
{
    int V, E, u, v, w, cost,t,totalCost,airPorts;
    vector< pair<int, ii> > EdgeList;

    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++){
        totalCost = 0;
        scanf("%d %d %d", &V, &E, &cost);
        EdgeList.clear();
        for (int j = 0; j < E; j++) {
            scanf("%d %d %d", &u, &v, &w);
            EdgeList.push_back(make_pair(w, ii(u-1, v-1)));
        }
        sort(EdgeList.begin(), EdgeList.end());

        initSet(V);
        int k = 0;
        for (int j = 0; j < E; j++) {
            pair<int, ii> front = EdgeList[j];
            if(k > V - 1 || front.first >= cost)
                break;
            if (!isSameSet(front.second.first, front.second.second)) {
            totalCost += front.first;
            unionSet(front.second.first, front.second.second);
            k++;
            }
        }
        airPorts = 0;
        for(int j = 0 ; j < V ; j++)
            if(pset[j] == j){
                totalCost += cost;
                airPorts ++;
            }

         printf("Case #%d: %d %d\n",(i+1),totalCost,airPorts);
    }
    return 0;
}

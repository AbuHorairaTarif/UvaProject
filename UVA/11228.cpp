#include<iostream>
#include<vector>
#include<set>
#include<math.h>
#include<cmath>
#include<utility>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

#define FOR(i,j) for(int i=0;i<j;i++)
#define edge pair<int,int>

vector<pair<int,int> > cordinates;
vector<pair<double,edge> > GRAPH,MST;
int n,r;

int parent[1000];

int findset(int x){
	if(parent[x]==x)
		return x;
	return findset(parent[x]);
}
int main(){
	int t=0;
	cin>>t;
	FOR(_t,t){
		cin>>n>>r;

		FOR(i,n) parent[i]=i;
		cordinates.clear();
		MST.clear();
		GRAPH.clear();

		FOR(i,n){
			int x,y;
			cin>>x>>y;
			cordinates.push_back(pair<int,int>(x,y));
		}
		FOR(r,n){
			for(int c=r+1;c<n;c++){
				double w=sqrt(pow(cordinates[c].first - cordinates[r].first,2) +
							pow(cordinates[c].second - cordinates[r].second,2));
				GRAPH.push_back(pair<double,edge>(w,edge(r,c)));
			}
		}

		double roads=0, rails=0;
		int states=1;

		int i, pu, pv;
		int E=GRAPH.size();
		sort(GRAPH.begin(),GRAPH.end());
		for(i=0; i<E; i++)
		{
			pu = findset(GRAPH[i].second.first);
			pv = findset(GRAPH[i].second.second);
			if(pu != pv)
			{
				MST.push_back(GRAPH[i]);
				if(GRAPH[i].first <= r)
					roads += GRAPH[i].first;
				else
				{
					states++;
					rails += GRAPH[i].first;
				}
				parent[pu] = parent[pv];
			}
		}

		cout<<"Case #"<<_t+1<<": "<<states<<" "<<floor(roads + 0.5)<<" "<<floor(rails + 0.5)<<endl;
	}
	return 0;
}

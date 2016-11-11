#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>

using namespace std;

#define FOR(i,j) for(int i=0;i<j;i++)
int main(){
	int N;
	string strbuf;
	string strbuf2;
	int CaseNo=1;
	while (cin>>N)
	{
		vector<string> beverages;
		map<string,int> ine;
		FOR(i,N){
			cin>>strbuf;
			beverages.push_back(strbuf);
			ine[strbuf]=0;
		}
		map<string, vector<string> > edges;
		int M;
		cin>>M;
		FOR(i,M){
			cin>>strbuf>>strbuf2;
			edges[strbuf].push_back(strbuf2);
			ine[strbuf2]++;
		}
		vector<string> ans;
		FOR(i,N){
			if(ine[beverages[i]]==0){
				ans.push_back(beverages[i]);
				ine[beverages[i]]=-1;
				FOR(j,edges[beverages[i]].size())
					ine[edges[beverages[i]][j]]--;
				i=-1;
			}
		}
		if(ans.size()==N){
			cout<<"Case #"<<CaseNo++<<": Dilbert should drink beverages in this order: ";
			FOR(i,N){
				cout<<ans[i];
				if(i<N-1)
					cout<<" ";
			}
			cout<<"."<<endl<<endl;
		}
	}
}

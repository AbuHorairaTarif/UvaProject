#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main(){
int i,j,k,b=0;
while(cin>>i>>j>>k){b++;
        map<int,int>mp;
    if(i==0&&j==0&k==0)break;
    cout<<"Case "<<b<<":"<<endl;
    int h=(i+j)*k+j;

   int r=j;
while(r<=h){
 for(int d=1;d<=i;d++){
    r=r+1;
    mp[r]++;

 }
r=r+j;
}

for(int m=1;m<=h;m++){
    for(int t=1;t<=h;t++){
        if(mp[m]==1&&mp[t]==1)cout<<".";
        else cout<<"*";
        }

    cout<<"\n";

}

cout<<endl;

}



return 0;
}

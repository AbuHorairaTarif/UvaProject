#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
long long f[21];
char A[21];
void setA(int idx,char c){
        int i = 0 ;
        while(idx>=0){
                if(A[i]==0)idx--;
                if(idx<0){A[i]=c;break;}
                i++;
        }
}
void solve(){
        string str;
        long long ctr;
        cin >> str >> ctr;

        ctr--;
        for(int i = 0 ; i < str.size() ; ++ i )A[i]=0;
        for(int i = 0 ; i < str.size() ; ++ i ){
                int tar=ctr/f[str.size()-i-1];
                setA(tar,str[i]);

                ctr%=f[str.size()-i-1];
        }
        for(int i = 0 ; i < str.size() ; ++ i ) cout << A[i] ;
        cout << endl;
}
int main(){
        f[0]=1;
        for(int i = 1 ; i <= 20 ; ++ i ) f[i]=f[i-1]*i;
        int t;
        scanf("%d",&t);
        for(int i = 1 ; i <= t;  ++ i ){
                printf("Case %d: ",i);
                solve();
        }
}

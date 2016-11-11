#include<iostream>

using namespace std;

long long int arr[10010],k;


int func(int i,int j, int cnt)
{
    if(cnt>k)   return cnt;
    if(i>j)
        return cnt;
    if(arr[i]==arr[j])
        return func(i+1,j-1,cnt);
    else
        return min(func(i+1,j,cnt+1),func(i,j-1,cnt+1));
}

int main()
{
    long long t,kk=1,n,i,j,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>arr[i];

        i=0;
        j=n-1;

        cnt=func(i,j,0);


    cout<<"Case "<<kk++<<": ";
    if(cnt>k)
        cout<<"Too difficult";
    else if(cnt==0)
        cout<<"Too easy";
    else
        cout<<cnt;
    cout<<endl;
    }
}

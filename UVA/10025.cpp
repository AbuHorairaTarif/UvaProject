#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int testCase;
    scanf("%d",&testCase);
    bool blank=false;
    while(testCase--)
    {
        long long int k;
        cin>>k;
        k=k<0?k*-1:k;
        long long int n=(long long int)sqrt(k*2);
        if(k%2==1)
        {
            long long int res=(n*(n+1))/2;
            while(res<k||res%2==0)
            {
                n++;
                res=(n*(n+1))/2;
            }
        }
        else
        {
            long long res=(n*(n+1))/2;
            while(res<k||res%2==1)
            {
                n++;
                res=(n*(n+1))/2;
            }
        }
        if(blank) printf("\n");
        blank = true;
        n=k==0?3:n;
        cout<<n<<endl;
    }
    return 0;
}

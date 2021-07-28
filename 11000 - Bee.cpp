#include<bits/stdc++.h>
using namespace std;
#define MX 100001
unsigned int male[MX] ,total[MX] ;
int main()
{
    freopen("Input.txt","r",stdin) ;
    freopen("Output.txt","w",stdout) ;
    int n ;
    memset(male,-1,sizeof male) ;
    memset(total,-1,sizeof male) ;
    male[0] = 0 ;
    total[0] = 1 ;
    while(cin>>n && n!=-1)
    {
        for(int i=1 ; i<=n ; i++)
        {
            male[i] = total[i-1] ;
            total[i] = male[i] + male[i-1] + 1 ;
        }
        cout<<male[n] <<" " <<total[n] <<endl ;
    }
    return 0 ;
}

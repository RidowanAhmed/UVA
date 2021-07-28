#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ,imin , imax ;
        imin = INT_MAX  ;
        imax = -1*INT_MAX  ;
        cin>>n ;
        for(int i=0,inp ; i<n ; i++)
        {
            cin>>inp ;
            if(imin>inp) imin = inp ;
            if(imax<inp) imax = inp ;
        }
        cout<<(imax-imin)*2 <<endl ;
    }
    return 0 ;
}

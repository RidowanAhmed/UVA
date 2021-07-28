#include<bits/stdc++.h>
using namespace std ;
int main()
{
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;
    int t ;
    cin>>t ;
    while(t--)
    {
        int ampl , freq ;
        cin>>ampl >>freq ;
        while(freq--)
        {
            for(int i=1 ; i<=ampl ; i++)
            {
                for(int j=1 ; j<=i ; j++)
                    cout<<i ;
                cout<<endl ;
            }
            for(int i=ampl-1 ; i>0 ; i--)
            {
                for(int j=1 ; j<=i ; j++)
                    cout<<i ;
                cout<<endl ;
            }
            if(t>0 || freq>=1)
                cout<<endl ;
        }
    }
    return 0 ;
}

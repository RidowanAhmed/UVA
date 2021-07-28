#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
    long m , n  ;
    while(cin>>n >>m && (n!=0 || m!=0))
    {
        long inp , cnt = 0 ;
        map<long,long> mymap ;
        for(int i=0 ; i<n ; i++)
        {
            cin>>inp ;
            mymap[inp] = 1 ;
        }
        for(int i=0 ; i<m ; i++)
        {
            cin>>inp ;
            if(mymap[inp]==1)
                cnt++ ;
        }
        cout<<cnt <<endl ;
        mymap.clear() ;
    }
    return 0;
}

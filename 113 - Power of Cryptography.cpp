#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    long long n , p ;
    double s ;
    while(cin>>n >>p)
    {
        s = pow(p,1.0/n) ;
        cout<<ceil(s)  <<endl ;
    }
    return 0;
}

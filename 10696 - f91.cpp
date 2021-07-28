#include<bits/stdc++.h>
using namespace std ;
long long f91(long long n)
{
    if(n<=100)
        return f91(f91(n + 11)) ;
    else if(n>=101)
        return n-10 ;
}
int main()
{
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;
    long long n ;
    while(cin>>n && n!=0)
    {
        cout<<"f91("  <<n <<") = " <<f91(n) <<endl ;
    }
    return 0 ;
}


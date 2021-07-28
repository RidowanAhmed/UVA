#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    for(int i=1 ; i<=t ; i++)
    {
        int a,b,c ;
        int maxS,midS,minS ;
        cin>>a >>b >>c ;
        maxS = max(max(a,b),c) ;
        minS = min(min(a,b),c) ;
        if(a!=maxS && a!=minS)
            midS = a ;
        else if(b!=maxS && b!=minS)
            midS = b ;
        else
            midS = c ;
        cout<<"Case " <<i <<": " <<midS <<endl ;
    }
}

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ,c = 1;
    cin>>T ;
    while(T--)
    {
        int N,K,P ;
        cin>>N >>K >>P ;
        for(int i=0 ; i<P ; i++)
        {
            K = (K+1) % N ;
//            cout<<K <<"\t"  ;
        }
        if(K==0)
            cout<<"Case " <<c++ <<": " <<N <<endl ;
        else
            cout<<"Case " <<c++ <<": " <<K <<endl ;
    }
    return 0 ;
}

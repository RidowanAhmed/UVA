#include<bits/stdc++.h>
using namespace std ;
#define MAX 1000000
bool tree[MAX] ;
int main()
{
    int t ,cs=1 ;
    scanf("%d",&t) ;
    while(t--)
    {
        memset(tree,false,sizeof tree) ;
        int n, t, h ,mh=-1 ;
        long long ans=0 ;
        scanf("%d",&n) ;
        while(n--)
        {
            scanf("%d %d",&t,&h) ;
            if(mh<h)
                mh = h ;
            if(!tree[t])
            {
                ans += ans+mh ;
                memset(tree,false,sizeof tree) ;
                cout<<"ans-" << ans <<endl ;
                mh = -1 ;
            }
            tree[t] = true ;
        }
        printf("Case %d: %lld\n",cs++,ans) ;
    }
    return 0 ;
}

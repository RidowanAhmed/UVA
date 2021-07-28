#include<bits/stdc++.h>
using namespace std ;
char s[502] ;
int find(char ch,int l,int r)
{
    int ans=0 ;
    for(int i=l ; i<r ; i++)
    {
        if(s[i]==ch)
            return 1 ;
    }
    return 0 ;
}
int main()
{
    //freopen("inp.txt","r",stdin) ;
    //freopen("out.txt","w",stdout) ;
    int t , cs = 1 ;
    scanf("%d",&t) ;
    while(t--)
    {
        int n , k , rec=0 ;
        scanf("%d %d %s",&n,&k,&s) ;
        int l=0,r=0 ;
        for(int i=0 ; i<n ; i++)
        {
            //printf("%d %d\n",l,r) ;
            rec += find(s[i],l,r++) ;
            if(r>k)
               l++ ;
        }
        printf("Case %d: %d\n",cs++,rec) ;
    }
    return 0 ;
}

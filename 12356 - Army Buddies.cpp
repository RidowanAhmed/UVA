#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int s, b  ;
    while((scanf("%d %d",&s,&b)==2) && (b!=0 || s!=0))
    {
        set<int> st  ;
        set<int>:: iterator lb ,rb ;
        for(int i=0 ; i<s ; i++)
            st.insert(i+1) ;
        for(int i=0,l,r; i<b ; i++)
        {
            scanf("%d %d", &l,&r) ;

            lb = st.find(l) ;
            rb = st.find(r) ;
            if(lb==st.begin())
                printf("* ") ;
            else
                printf("%d ",*(--lb)) ;
            if(rb==st.end())
                printf("*\n") ;
            else
                printf("%d\n",*(++rb)) ;
            ++lb ;
            if(l==r)
                st.erase(l) ;
            else
                st.erase(lb,rb) ;
        }
        printf("-\n");
        st.clear() ;
    }
    return 0;
}

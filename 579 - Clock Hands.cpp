#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int h , m ;
    char ch ;
    while(scanf("%d%c%d",&h,&ch,&m)==3)
    {
        if(h==0 && m==0) break ;
        if(h>6)
            h = (12-h) * 30 ;
        else
            h = h * 30 ;
        if(m>30)
            m = (60-m) * 6 ;
        else
            m = m * 6 ;
        cout<<abs(h-m) <<endl ;
    }
    return 0 ;
}

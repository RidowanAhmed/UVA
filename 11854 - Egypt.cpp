#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a, b ,c ;
    while(~scanf("%d %d %d",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)
            return 0 ;
        if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
            printf("right\n") ;
        else
            printf("wrong\n") ;
    }
    return 0 ;
}

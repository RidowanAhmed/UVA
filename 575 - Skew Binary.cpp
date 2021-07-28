#include<bits/stdc++.h>
using namespace std ;
int main()
{
    //freopen("input.txt","r",stdin) ;
    long int n ;
    while(scanf("%ld",&n) && n!=0)
    {
        int res=0 ;
        for(int i=1 ; n!=0 ; i++)
        {
            res += (n%10) * ((int)pow(2.0,i)-1) ;
            n /= 10 ;
            //cout<<res <<" " <<n <<endl ;
        }
        printf("%d\n",res) ;
    }
}

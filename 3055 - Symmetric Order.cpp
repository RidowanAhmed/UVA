#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;
    int n ,cnt=1 ;
    while(scanf("%d",&n) && n!=0)
    {
        string str[n] ;
        for(int i=0 ; i<n ; i++)
            cin>>str[i] ;

        printf("SET %d\n",cnt++) ;

        for(int i=0 ; i<n ; i+=2)
            cout<<str[i] <<"\n" ;

        for(int i= (n&1 ? n-2 : n-1); i>0 ; i-=2)
            cout<<str[i] <<"\n" ;
    }
    return 0 ;
}

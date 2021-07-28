#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char str[1000] ;
    while(gets(str))
    {
        for(int i=0 ; i<strlen(str) ; i++)
            cout<<char(str[i]-7) ;
        cout<<endl ;
    }
    return 0 ;
}

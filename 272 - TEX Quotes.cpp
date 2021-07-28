#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char str[1000] ;
    int cnt=0 ;
    while(gets(str))
    {
        for(int i=0 ; i<strlen(str) ; i++)
        {
            if(str[i]=='"')
            {
                if(cnt%2==0)
                    cout<<"``" ;
                else
                    cout<<"''" ;
                cnt++ ;
            }
            else
                cout<<str[i] ;
        }
        cout<<endl ;
    }
    return 0 ;
}

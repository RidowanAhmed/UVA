#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ,c = 1;
    cin>>t ;
    cin.ignore() ;
    while(t--)
    {
        string str1 ,str2 ;
        getline(cin,str1) ;
        getline(cin,str2) ;
        
        if( str1.compare(str2)==0 )
            cout<<"Case "<<c++ <<": " <<"Yes" <<endl ;
        else
        {
            str1.erase(remove_if(str1.begin(), str1.end(), ::isspace), str1.end());
            if( str1.compare(str2)!=0 )
                cout<<"Case "<<c++ <<": " <<"Wrong Answer" <<endl ;
            else
                cout<<"Case "<<c++ <<": " <<"Output Format Error" <<endl ;
        }
    }
    return 0 ;
}

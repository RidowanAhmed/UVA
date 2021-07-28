#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string str ;
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./" ;
    while(getline(cin,str))
    {
        for(int i=0 ; i<str.length() ; i++)
        {
            bool isFound = false ;
            for(int j=0 ; j<keyboard.length() && !isFound ; j++)
            {
                if(str[i]==keyboard[j])
                {
                    cout<<keyboard[j-1] ;
                        isFound = true  ;
                }
            }
            if(!isFound)
                cout<<str[i] ;
        }
        cout<<endl ;
    }
    return 0 ;
}

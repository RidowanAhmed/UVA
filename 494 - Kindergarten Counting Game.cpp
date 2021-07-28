#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string str ;
    while(getline(cin,str))
    {
        int cnt=0 ;
        bool flag = false ;
        for(int i=0 ; i<str.length() ; i++)
        {
            if(flag)
                if(!isalpha(str[i]))
                    flag=false;
            if(isalpha(str[i]) && !flag)
            {
                cnt++;
                flag=true;
            }
        }
        cout<<cnt <<endl ;
    }
    return 0 ;
}

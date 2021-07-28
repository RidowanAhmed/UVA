#include<bits/stdc++.h>
using namespace std ;
string intTostr(int a)
{
    stringstream ss;
    ss << a;
    return ss.str();
}
int main()
{
//    freopen("inp.txt","r",stdin) ;
//    freopen("out.txt","w",stdout) ;
    int n ,inp  ;
    bool flag = false ;
    while(cin>>n && n!=0)
    {
        if(flag)
            cout<<endl ;
        flag = true ;
        deque<int> qt ;
        deque<int>::iterator it ;
        string str ="" ;
        for(int i=0 ; i<n ; i++)
        {
            cin>>inp ;
            qt.push_back(inp) ;
        }
        inp = 0 ;
        while(!qt.empty())
        {
            int temp = qt.front() ;
            str += intTostr(temp)  ;
            qt.pop_front() ;
            for(it=qt.begin() ; it<qt.end() ; ++it)
            {
                if(temp<*it)
                {
                    str += " " + intTostr(*it)  ;
                    temp = *it ;
                    qt.erase(it) ;
                }
            }
            inp++ ;
            str += "\n" ;
        }
        cout<<inp <<endl ;
        cout<<str ;
    }
    return 0 ;
}

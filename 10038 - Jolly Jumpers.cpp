#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    vector<int> inVec ,difVec ;
    while(cin>>n)
    {
        inVec.clear() ;
        difVec.clear() ;
        for(int i=0,inp ; i<n ; i++)
        {
            cin>>inp ;
            inVec.push_back(inp) ;
        }
        if(n==1)
        {
            cout<<"Jolly" <<endl ;    //Critical Case
            continue ;
        }
        for(int i=0 ; i<inVec.size()-1 ; i++)
            difVec.push_back( abs(inVec[i+1] - inVec[i]) ) ;
        sort(inVec.begin(),inVec.end()) ;
        sort(difVec.begin(),difVec.end()) ;
        bool matchFound ;
        for(int i=1 ; i<n ; i++)
        {
            matchFound=false ;
            for(int j=0 ; j<difVec.size() && !matchFound ; j++)
                if(i==difVec[j])
                    matchFound = true ;
            if(!matchFound)
            {
                cout<<"Not jolly" <<endl ;
                    break ;
            }
        }
        if(matchFound)
            cout<<"Jolly" <<endl ;
    }
    return 0 ;
}

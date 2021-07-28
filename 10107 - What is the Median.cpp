#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
    vector<long> vec ;
    long inp ;
    for(long i=0 ; scanf("%ld",&inp)==1 ; i++)
    {
        vec.push_back(inp) ;
        sort(vec.begin(), vec.end());
        long mid = i/2 ;
        if(i%2==0)
            printf("%ld\n",vec[mid]) ;
        else
            printf("%ld\n",(vec[mid]+vec[mid+1])/2) ;
    }
    return 0 ;
}

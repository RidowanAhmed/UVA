#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("inp.txt","r",stdin) ;
//    freopen("out.txt","w",stdout) ;
    int n ;
    while(cin>>n && n!=0)
    {
        priority_queue<int,vector<int>,greater<int> > qt ;
        for(int i=0,inp ; i<n ; i++)
        {
            cin>>inp ;
            qt.push(inp) ;
        }

        int total = 0, cost = 0;
        while (qt.size() > 1)
        {
            total = qt.top();
            qt.pop();
            total += qt.top();
            qt.pop();
            cost += total;
            qt.push(total);
        }
        cout<<cost <<endl ;
    }
}

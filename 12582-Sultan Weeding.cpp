#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ,cs=0 ;
    scanf("%d",&t) ;
    getchar() ;
    while(t--)
    {
        string str ;
        getline(cin,str) ;
        stack<char> st ;
        unordered_map<char,int> mp ;
        st.push(str[0]) ;
        for(int i=1 ; i<str.size() ; i++)
        {
            if(str[i]==st.top())
                st.pop() ;
            mp[str[i]]++ ;
        }
        printf("Case %d\n",cs++) ;
    }
    return 0 ;
}

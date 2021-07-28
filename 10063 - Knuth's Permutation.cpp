/*
 *The true test of a man's character is what he does when no one is watching
 */
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str;
    while(cin>>str)
    {
        do
        {
            string res = str;
            //reverse(res.begin(),res.end());
            cout<<res <<'\n';
        } while(next_permutation(str.begin(), str.end()));
        cout<<'\n';
    }
    return 0;
}
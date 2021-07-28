#include<bits/stdc++.h>
using namespace std ;
int main()
{
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;
    char  ch;
    stack<char> word;
    while (cin.get(ch))
    {
        if (!isspace(ch))
        {
            word.push(ch);
        }
        else
        {
            while (!word.empty())
            {
                cout << word.top();
                word.pop();
            }
            cout << ch;
        }
    }
    return 0;
}

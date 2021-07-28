#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
    int T, K, M ;
    map <char, double> mymap;
    map <char, double>::iterator it;
    char c;
    string line;
    double v, tot;
    scanf("%d", &T);
    while(T--)
    {
        tot = 0;
        scanf("%d", &K);
        for(int i = 0; i < K; i++)
        {
            cin >> c >> v;
            mymap[c] = v;
        }
        scanf("%d", &M);
        cin.ignore();
        for(int i = 0; i < M; i++)
        {
            getline(cin, line);
            for(int j = 0; j < line.size() ; j++)
            {
                it = mymap.find(line[j]);
                if(it != mymap.end())
                    tot += it->second;
            }
        }
        tot /= 100;
        printf("%0.2lf$\n", tot);
        mymap.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std ;
typedef unsigned long long ull;

ull fromBin(string binary)
{
    ull total = 0;
    for(int j = 0; j < binary.length(); j++)
                total = (total<<1) + binary[j] - '0';
    return total;
}

int main()
{
    int b , v ;
    while(scanf("%d %d",&b,&v) == 2)
    {
        vector<string> variable;
        vector<int> byte;

        for(int i = 0 ; i < v ; i++)
        {
            string key;     int value;
            cin>>key >>value;
            variable.push_back(key);
            byte.push_back(value);
        }
        map<string,ull> myMap;
        map<string,ull>::iterator itMap;
        for(int i = 0 ; i < variable.size() ; i++)
        {
            string str="", inp ;
            for(int j = byte[i] ; j>0 ; j--)
            {
                cin>>inp;
                str += inp;
            }
            myMap[variable[i]] = fromBin(str) ;
        }
        // for(itMap=myMap.begin() ; itMap!=myMap.end() ; itMap++)
        //  cout<<itMap->first <<"\t"  <<itMap->second <<endl;
        int q ;
        scanf("%d",&q) ;
        while(q--)
        {
            string str;
            cin>>str ;
            if(myMap.count(str)==0)
                cout<<str <<"=\n" ;
            else
                cout<<str <<"=" <<myMap[str] <<"\n" ;
        }
    }
    return 0 ;
}

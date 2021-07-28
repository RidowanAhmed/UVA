#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int t ;
    scanf("%d\n\n",&t) ;
    while(t--)
    {
        int totalTree = 0 ;
        char treeName[30] ;
        map<string,int> myMap ;
        map<string,int>:: iterator it ;
        while(gets(treeName))
        {
            string str = (string)treeName ;
            if(str.length()==0)
                break ;
            if(myMap.count(str)==0)
                myMap[str] = 1 ;
            else
                myMap[str]++ ;
            totalTree++ ;
        }
        for(it=myMap.begin() ; it!=myMap.end() ; it++)
        {
            double percentage = ( (double) (*it).second / (double) totalTree ) * 100.0 ;
            printf("%s %.4f\n",(*it).first.data(),percentage) ;
        }
        if(t>0)
            printf("\n") ;
    }
    return 0 ;
}

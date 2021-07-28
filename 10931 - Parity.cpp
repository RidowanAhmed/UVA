#include<bits/stdc++.h>
using namespace std ;

int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int n ;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            return 0;
        int mod , parity=0 ;
        vector<int> vec ;
        vector<int>:: iterator it ;
        while(n>0)
        {
            mod = n%2 ;
            if(mod == 1) parity++ ;
            vec.push_back(mod) ;
            n = n / 2 ;
        }
        reverse(vec.begin(),vec.end()) ;
        printf("The parity of ") ;
        for(int i:vec)
            printf("%d",i) ;
        printf(" is %d (mod 2).\n",parity) ;
        vec.erase(vec.begin(),vec.end()) ;
    }
}

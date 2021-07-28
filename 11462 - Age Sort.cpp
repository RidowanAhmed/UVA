#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int n ;
    while(scanf("%d",&n) && n!=0)
    {
        int age[100] = {0} , inp ;
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&inp) ;
            age[inp]++ ;
        }
        bool flag=false ;
        for(int i=1 ; i<100 ; i++)
        {
            if(age[i]!=0)
            {
                for(int j=0 ; j<age[i] ; j++)
                {
                    if(!flag)
                    {
                        printf("%d",i) ;
                        flag = true ;
                        continue ;
                    }
                    printf(" %d",i) ;
                }
            }
        }
        printf("\n");
    }
}

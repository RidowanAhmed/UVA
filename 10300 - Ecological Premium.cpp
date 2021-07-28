#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int f ;
        cin>>f ;
        if(f==0)
        {
            cout<<0 <<endl ;
            continue ;
        }
        int farmYard , nAnimals ,envFrnd ,budget =0 ;
        while(f--)
        {
            cin>>farmYard >>nAnimals >>envFrnd ;
            budget += farmYard * envFrnd  ;
        }
        cout<<budget <<endl ;
    }
    return 0 ;
}

#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    for(int cs=1 ; cs<=t ; cs++)
    {
        int a, b ;
        cin>>a >>b ;
        int oddSum = 0 ;
        for(int i=a ; i<=b ; i++)
            if(i%2 != 0)
                oddSum += i ;
        cout<<"Case " <<cs <<": " <<oddSum <<endl ;
    }
    return 0 ;
}

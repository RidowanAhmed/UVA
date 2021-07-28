#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int n ,set=1 ;
    while(cin>>n && n!=0)
    {
        int sum=0 ,minMove=0 ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++)
        {
            cin>>arr[i] ;
            sum += arr[i] ;
        }
        int brickPerStack = sum / n ;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i]>brickPerStack)
            minMove += arr[i] - brickPerStack  ;
        }

        cout<<"Set #" <<set++ <<endl ;
        cout<<"The minimum number of moves is " <<minMove <<"." <<endl <<endl;
    }
    return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    freopen("input.txt" , "r" , stdin) ;
    freopen("output.txt" , "w" , stdout) ;
    int t ;
    cin>>t ;
    for(int c=0 ; c<t ; c++)
    {
        int n  ;
        cin>>n ;
        int arr[n] ;
        double avg , sum=0, cnt=0 ;
        for(int i=0 ; i<n ; i++)
        {
            cin>>arr[i] ;
            sum += arr[i] ;
        }
        avg = sum/n ;
        for(int i=0 ; i<n ; i++)
            if(arr[i]>avg)
                cnt++ ;
        avg = (cnt*100.0)/(double)n ;
        printf("%.3f%%\n",avg) ;
    }
    return 0 ;
}

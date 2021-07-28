#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++)
            cin>>arr[i] ;
        int cnt=0 ;
        for(int i=0 ; i<n-1 ; i++)
        {
            //bool isSwap = false ;
            for(int j=i+1 ; j<n ; j++)
            {
                if(arr[i] > arr[j] )
                {
                    int temp = arr[i] ;
                    arr[i] = arr[j] ;
                    arr[j] = temp ;
                    //isSwap = true ;
                    cnt++ ;
                }
            }
            //if(!isSwap)  break ;
        }
        cout<<"Optimal train swapping takes " <<cnt <<" swaps." <<endl ;
    }
    return 0 ;
}

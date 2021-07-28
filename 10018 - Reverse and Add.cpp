#include<bits/stdc++.h>
using namespace std ;
long long reverse(long long n)
{
    long long result = 0 ;
    while(n!=0)
    {
        result = result*10 + n%10 ;
        n/= 10 ;
    }
    return result ;
}
bool isPalindrome(long long n)
{
    return ( n==reverse(n) ) ;
}
int main()
{  
    int t ;
    cin>>t ;
    while(t--)
    {
        long long givenNum, reverseNum ,sumNum,cnt=0 ;
        cin>>givenNum ;
        while(true)
        {
            reverseNum = reverse(givenNum) ;
            sumNum = givenNum + reverseNum ;
            cnt++ ;
            if(isPalindrome(sumNum))
                break ;
            givenNum = sumNum ;
        }
        cout<<cnt <<" " <<sumNum <<endl ;
    }
    return 0 ;
}

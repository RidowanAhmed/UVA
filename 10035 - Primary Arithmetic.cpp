#include<iostream>
using namespace std ;
int main()
{
    long long a, b ;
    while(cin>>a >>b)
    {
        if(a==0 && b==0)
            break ;
        long long cnt , carry ;
        cnt = carry = 0 ;
        while(a || b)
        {
            carry = (a%10 + b%10 + carry) / 10 ;
            a /= 10 ;
            b /= 10 ;
            cnt = cnt + carry ;
        }
        if(cnt==0)
            cout<<"No carry operation." <<endl ;
        else if(cnt==1)
            cout<<cnt <<" carry operation." <<endl ;
        else
            cout<<cnt <<" carry operations." <<endl ;
    }
    return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;
#define MX 1501
int uglyNumber[MX] = {0};
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}
int main()
{
    uglyNumber[0] = 1;
    int ugly2, ugly3, ugly5, nextUgly2, nextUgly3, nextUgly5;
    ugly2 = ugly3 = ugly5 = 0;
    nextUgly2 = uglyNumber[ugly2] * 2;
    nextUgly3 = uglyNumber[ugly3] * 3;
    nextUgly5 = uglyNumber[ugly5] * 5;

    int nextUgly = min(nextUgly2, nextUgly3, nextUgly5)
    for(int i=0 ; i<MX ; i++)
    {

    }
//    cout<<"The 1500'th ugly number is 859963392." <<endl ;
    return 0 ;
}

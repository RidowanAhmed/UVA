#include<iostream>
using namespace std;
int main()
{
    double n ;
    while(scanf("%lf",&n) && n!=0.00)
    {
        int i ;
        double sum = 0.00 ;
        for(i=2 ; sum<=n ; i++)
        {
            sum += 1.00/i ;
//            printf("%lf   %d\n",sum,i) ;
//            getchar() ;
        }
        printf("%d card(s)\n",i-2) ;
    }
    return 0 ;
}

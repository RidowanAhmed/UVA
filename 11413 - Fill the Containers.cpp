#include<bits/stdc++.h>
using namespace std ;
#define MX 1005
int arr[MX] = {0};
bool possible(int k, int l, int n)
{
    k--;
    int sum = 0, i;
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]>l)
            return false;
        else if(sum+arr[i] <= l)
            sum += arr[i];
        else
        {
            k--;
            if(k<0)
                return false ;
            sum = arr[i];
        }
        //cout<<sum <<endl;
    }
    if(i==n)
        return true;
    return false;
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, m, hi, lo, mid;
    while(scanf("%d %d", &n, &m)==2)
    {
        hi =  0 ; lo = INT_MAX;

        for(int i=0 ; i<n ; i++)
        {
            scanf("%d", &arr[i]);
            hi += arr[i];
            if(lo>arr[i])
                lo = arr[i];
        }

        while(hi>lo)
        {
            mid = lo + (hi-lo) / 2;
            if(possible(m,mid,n))
                hi = mid ;
            else
                lo = mid + 1;
        }
        printf("%d\n", hi);
    }
    return 0;
}


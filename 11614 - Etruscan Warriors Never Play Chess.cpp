#include <bits/stdc++.h>
using namespace std;
long long int n;

bool isPossible(long long int r)
{	
	long long int sum = 0;
	for(long long int i=1 ; i<=r ; i++)
		sum += i;
	return sum <= n;
}

int main()
{
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld", &n);
		long long int hi = n , lo = 0, mid;
		while(hi-lo > 3)
		{
			mid = lo + ((hi - lo) / 2);
			if(isPossible(mid))
				lo = mid;
			else
				hi = mid - 1;
		}
		//printf("lo %lld hi %lld\n", lo, hi);
		long long int row = 0;

		for(long long int i=lo ; i<=hi ; i++)
		{
			if(isPossible(i))
				row = i;

		}
		printf("%lld\n", row);
	}

	return 0;
}
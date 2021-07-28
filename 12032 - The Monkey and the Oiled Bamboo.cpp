#include<bits/stdc++.h>
using namespace std ;
	
#define MX 100005
int n, diff, ladder[MX] = {0};
bool isPosiible(int k)
{
	for(int i=0 ; i<n ; i++)
	{
		if(i==0)
			diff = ladder[i];
		else
			diff = ladder[i] - ladder[i-1];

		if(diff > k)
			return false;
		else if(diff == k)
			k--;
	}
	return k >= 0;
}
int main()
{
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	
	int t, cs=1;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);		
		scanf("%d", &ladder[0]) ;

		int k = ladder[0];
		for(int i=1 ; i<n ;i++)
		{
			scanf("%d", &ladder[i]) ;
			diff = ladder[i] - ladder[i-1] ;
			k = max(k, diff);
		}
		
		
		if(!isPosiible(k))
			k++;
		printf("Case %d: %d\n", cs++, k);
	}

	return 0 ;
}
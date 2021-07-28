#include <bits/stdc++.h>
using namespace std;
long long page[505] = {0};
bool assign[505];
int  m, k;

bool possible(long long maxPage)
{
	int i , scriber = k -1;
	long long sum = 0;
	for(i=0 ; i<m ; i++)
	{
		if(page[i] > maxPage)
			return false;
		else if(sum + page[i] <= maxPage)
			sum += page[i];
		else
		{
			scriber--;
			if(scriber < 0)
				return false;
			sum = page[i];
		}
	}
	if(i == m)
		return true;
	return false;
}

void printPage(long long maxPage)
{
	stack<int> printStack;
	int scriber = k-2;
	long long sum = 0;
	for(int i=m-1 ; i>=0 ; i--)
	{
		if(sum + page[i] <= maxPage && i>scriber)
		{
			sum += page[i];
			printStack.push(page[i]);
			
		}
		else
		{
			sum = page[i];
			printStack.push(-1);
			printStack.push(page[i]);
			scriber--;

		}
	}
	
	while(printStack.size() > 1)
	{
		if(printStack.top() == -1)
			printf("/ ");
		else
			printf("%d ", printStack.top());
     	printStack.pop();
    }
    if(printStack.top() != -1)
    	printf("%d\n", printStack.top());
    else
    	printf("\n");
}
int main()
{
    
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &m, &k);
		long long lo = -1, hi = 0, mid;
		for(int i=0 ; i<m ; i++)
		{
			scanf("%lld", &page[i]);
			lo = max(lo, page[i]);
			hi += page[i];
		}
		if(m==k)
		{
			for(int i=0 ; i<m-1 ; i++)
				printf("%lld / ", page[i]);
			printf("%lld\n", page[m-1]);
			continue;
		}
		while(hi>lo)
		{
			mid = lo + (hi - lo) / 2 ;
			if(possible(mid))
				hi = mid;
			else
				lo = mid + 1;
        }
		printPage(hi);
	}

	return 0;
}

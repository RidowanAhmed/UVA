#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t, cs = 1;
	scanf("%d", &t);
	while(t--)
	{
		int t1, t2, final, atn, test[3];
		scanf("%d %d %d %d", &t1, &t2, &final, &atn);
		scanf("%d %d %d", &test[0], &test[1], &test[2]);

		sort(test, test+3);

		int avg = (test[1] + test[2]) / 2;
		int total = t1 + t2 + final + atn + avg;

		if(total > 89)
			printf("Case %d: A\n", cs++);
		else if(total > 79)
			printf("Case %d: B\n", cs++);

		else if(total > 69)
			printf("Case %d: C\n", cs++);
		else if(total > 59)
			printf("Case %d: D\n", cs++);
		else
			printf("Case %d: F\n", cs++);
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std ;

int main()
{

    int n, q;
	scanf("%d", &n);
    vector<int> lady;
	vector<int>::iterator low,up;

	for(int i=0 ; i<n ; i++)
	{
		int inp;
		scanf("%d", &inp);
		lady.push_back(inp);
	}

    scanf("%d", &q);

	for(int i=0 ; i<q ; i++)
	{
		int height;
		scanf("%d", &height);
		low=lower_bound (lady.begin(), lady.end(), height);
	  	up= upper_bound (lady.begin(), lady.end(), height);
	  	int a = low- lady.begin() ;
		int b = up - lady.end() ;

        if(a==0)
            printf("X");
        else
            printf("%d", *(--low) );

		if(b==0)
            printf(" X\n");
        else
            printf(" %d\n", *(up) );
	}
    
  return 0;
}

#include<bits/stdc++.h>
using namespace std ;
#define MAX 10005
vector<int> vec[MAX];
bool vis[MAX] ;
int total  ;

void dfs(int row) 
{
	total++ ;
	vis[row] = true ;
	for(int col=0 ; col<vec[row].size() ; col++)
		if(!vis[vec[row][col]])
			dfs(vec[row][col]) ;
}

int main()
{
	int t  ;
	scanf("%d",&t) ;
	while(t--)
	{
		memset(vis,false,sizeof vis) ;
		total = 0 ;
		int n, m, l ;
		scanf("%d %d %d",&n,&m,&l) ;
		while(m--)
		{
			int x, y ;
			scanf("%d %d",&x,&y) ;
			vec[x].push_back(y) ;
		}
		while(l--)
		{
			int z ;
			scanf("%d",&z) ;
			if(!vis[z])
				dfs(z) ;
		}
		printf("%d\n",total);
		for(int i=0 ; i<n ; i++)
			vec[i].clear() ;
	}
	return 0;
}
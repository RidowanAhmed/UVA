#include<bits/stdc++.h>
using namespace std ;
#define MX 200001
int arr[MX], tree[3*MX] ;

void update(int node,int b,int e,int i,int value)
{
	if(e<i || b>i)
		return ;
	if(b==e)
	{
        tree[node] = value ;
		return ;
	}
	int left  = node*2     ;
	int right = node*2 + 1 ;
	int mid   = (b+e) / 2  ;
	update(left,b,mid,i,value) ; update(right,mid+1,e,i,value) ;
	tree[node] = tree[left] + tree[right] ;
}

int querySum(int node,int b,int e,int fr,int to)
{
	if(e<fr || b>to)
		return 0 ;
	if(b>=fr && e<=to)
		return tree[node] ;
	int left  = 2*node 	   ;
	int right = 2*node + 1 ;
	int mid   = (b+e) / 2  ;
	int q1 = querySum(left,b,mid,fr,to) ; int q2 = querySum(right,mid+1,e,fr,to) ;
	return q1+q2 ;
}

void segment(int node,int b,int e)
{
	if(b==e)
	{
		tree[node] = arr[b] ;
		return ;
	}
	int left  = 2*node 	   ;
	int right = 2*node + 1 ;
	int mid   = (b+e) / 2  ;
	segment(left,b,mid) ; segment(right,mid+1,e) ;
	tree[node] = tree[left]+tree[right] ;
}

int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
	int n , cs=1 ;
	while(scanf("%d",&n) && n!=0)
	{
	    if(cs!=1 && n!=0)
            printf("\n");
		for(int i=1 ; i<=n ; i++)
			scanf("%d",&arr[i]) ;
		segment(1,1,n) ;

		printf("Case %d:\n",cs++) ;
		char comnd[4] ;
		while(scanf("%s",comnd) && comnd[0]!='E')
		{
			if(comnd[0]=='S')
			{
				int index, value ;
				scanf("%d %d",&index,&value) ;
				update(1,1,n,index,value) ;
			}
			else if(comnd[0]=='M')
			{
				int l, r ;
				scanf("%d %d",&l,&r) ;
				printf("%d\n",querySum(1,1,n,l,r)) ;
			}
		}
	}
	return 0;
}

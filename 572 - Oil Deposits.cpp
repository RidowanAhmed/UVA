#include<bits/stdc++.h>
using namespace std ;
char grid[100+1][100+1] ;
bool vis[100+1][100+1] ;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int m, n ;
void bfs(int start_row,int start_col)
{
    queue<int> Q ;
    Q.push(start_row) ; Q.push(start_col) ;
    while(!Q.empty())
    {
        int cur_row = Q.front() ; Q.pop() ;
        int cur_col = Q.front() ; Q.pop() ;
        for(int i=0 ; i<8 ; i++)
        {
            int x = cur_row + fx[i] ;
            int y = cur_col + fy[i] ;
            if(x>0 && x<=m && y>0 && y<=n && grid[x][y]=='@' && !vis[x][y])
            {
                vis[x][y] = true ;
                Q.push(x) ; Q.push(y) ;
            }
        }
    }
}
void takeInput(int row, int col)
{
    for(int i=1 ; i<=row ; i++)
    {
        for(int j=1 ; j<=col ; j++)
        {
            char ch = getchar() ;
            grid[i][j] = ch ;
        }
        getchar() ;
    }
}
void giveOutput(int row, int col)
{
    for(int i=1 ; i<=row ; i++)
    {
        for(int j=1 ; j<=col ; j++)
            printf("%c",grid[i][j]) ;
        puts("") ;
    }
    puts("") ;
}
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    while(scanf("%d %d",&m,&n) && m!=0 && n!=0)
    {
        getchar() ;
        takeInput(m,n) ;
        int cmpno = 0 ;
        memset(vis,false,sizeof vis) ;
        for(int i=1 ; i<=m ; i++)
        {
            for(int j=1 ; j<=n ; j++)
            {
                if(grid[i][j]=='@' && !vis[i][j])
                {
                    cmpno++ ;
                    bfs(i,j) ;
                }
            }
        }
        printf("%d\n",cmpno) ;
    }
    return 0 ;
}

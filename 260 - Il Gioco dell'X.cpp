#include<bits/stdc++.h>
using namespace std ;
#define MAX 202
char grid[MAX][MAX] ;
bool vis[MAX][MAX] ;
int fx[]={-1,-1,+0,+0,+1,+1};
int fy[]={-1,+0,-1,+1,+0,+1};
int dir = 6 ;
int N ;
bool bfs(int start_row,int start_col)
{
    queue<int> Q ;
    Q.push(start_row) ; Q.push(start_col) ;
    while(!Q.empty())
    {
        int cur_row = Q.front() ; Q.pop() ;
        int cur_col = Q.front() ; Q.pop() ;
        for(int i=0 ; i<dir ; i++)
        {
            int x = cur_row + fx[i] ;
            int y = cur_col + fy[i] ;
            if(x>0 && x<=N && y>0 && y<=N && grid[x][y]=='b' && !vis[x][y])
            {
                if(x==N)
                    return true ;
                vis[x][y] = true ;
                Q.push(x) ; Q.push(y) ;
            }
        }
    }
    return false ;
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
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int cs=1 ;
    while(scanf("%d",&N) && N!=0)
    {
        getchar() ;
        takeInput(N,N) ;
        bool blackWIn = false ;
        for(int i=1 ; i<=N ; i++)
        {
            if(grid[1][i]=='b')
            {
                memset(vis,false,sizeof vis) ;
                vis[1][i] = true ;
                blackWIn = bfs(1,i) ;
                if(blackWIn)
                    break ;
            }
        }
        if(blackWIn)
            printf("%d B\n",cs++) ;
        else
            printf("%d W\n",cs++) ;
    }
    return 0 ;
}

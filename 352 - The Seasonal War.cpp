#include<bits/stdc++.h>
using namespace std ;
#define MAX 9
char grid[MAX+2][MAX+2] ;
bool vis[MAX+2][MAX+2] ;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int dir = 4 ;
int W = 9 , black, white ;
void bfs(int start_row,int start_col)
{
    int ans =1 ;
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
            if(x>=0 && x<=W && y>=0 && y<=W && grid[x][y]=='1' && !vis[x][y])
            {
                ans++ ;
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
            if(ch=='X')      black++ ;
            else if(ch=='O') white++ ;
            grid[i][j] = ch ;
        }
        getchar() ;
    }
}
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int T ;
    scanf("%d",&T)
    while(T--)
    {
        getchar() ;
        black = white = 0 ;
        takeInput(W,W) ;
        memset(vis,false,sizeof vis) ;
        for(int i=1 ; i<=W ; i++)
        {
            for(int j=1 ; j<=W ; j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    vis[i][j] = true ;
                    bfs(i,j) ;
                    eagles++ ;
                }
            }
        }
        printf("Black %d White %d\n",black,white) ;
    }
    return 0 ;
}



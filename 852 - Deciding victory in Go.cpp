#include<bits/stdc++.h>
using namespace std ;
#define MAX 9+2
char grid[MAX][MAX] ;
bool vis[MAX][MAX],isBlack,isWhite ;
int N = 9, black, white ;
int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]= {+1,-1,+0,+0,+1,+1,-1,-1};
int dir = 4 ;
int bfs(int start_row,int start_col)
{
    int cnt = 1  ;
    queue<int> Q ;
    Q.push(start_row) ;
    Q.push(start_col) ;
    while(!Q.empty())
    {
        int cur_row = Q.front() ; Q.pop() ;
        int cur_col = Q.front() ; Q.pop() ;
        for(int i=0 ; i<dir ; i++)
        {
            int x = cur_row + fx[i] ;
            int y = cur_col + fy[i] ;
            if(x>0 && x<=N && y>0 && y<=N && grid[x][y]=='.' && !vis[x][y])
            {
                vis[x][y] = true ;
                Q.push(x) ; Q.push(y) ;
                cnt++ ;
            }
            if(grid[x][y]=='X') isBlack = true ;
            else if(grid[x][y]=='O') isWhite = true ;
        }
    }
    if(isBlack && isWhite)
        return 0 ;
    return cnt ;
}
void takeInput(int row,int col)
{
    for(int i=1 ; i<=row ; i++)
    {
        for(int j=1 ; j<=col ; j++)
        {
            char ch  = getchar() ;
            grid[i][j] = ch ;
            if(ch=='X') black++ ;
            else if(ch=='O') white++ ;
        }
        getchar() ;
    }
}
int main()
{
    int t ;
    scanf("%d",&t) ;
    getchar() ;
    while(t--)
    {
        black = white = 0 ;
        takeInput(N,N) ;
        memset(vis,false,sizeof vis) ;
        for(int i=1 ; i<=N ; i++)
        {
            for(int j=1 ; j<=N ; j++)
            {
                isBlack = isWhite = false ;
                int areaCount = 0 ;
                if(grid[i][j]=='.' && !vis[i][j])
                {
                    vis[i][j] = true ;
                    areaCount = bfs(i,j) ;
                    //printf("[%d][%d]-%d\n",i,j,areaCount ); 
                }
                if(isBlack)
                    black += areaCount ;
                else if(isWhite)
                    white += areaCount ;
                
            }
        }
        printf("Black %d White %d\n",black,white) ;
    }
    return 0 ;
}

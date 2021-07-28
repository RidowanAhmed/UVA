#include<bits/stdc++.h>
using namespace std ;
#define MAX 51
char grid[MAX][MAX] ;
bool vis[MAX][MAX] ;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int dir = 4 ;
int W, H ;
bool comparator(pair<char,int> a, pair<char,int> b)
{
    if(a.second>b.second)
        return true ;
    else if(a.second==b.second)
        return a.first<b.first?true:false ;
    else
        return false ;
}
int bfs(int start_row,int start_col,char ch)
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
            if(x>0 && x<=W && y>0 && y<=H && grid[x][y]==ch && !vis[x][y])
            {
                ans++ ;
                vis[x][y] = true ;
                Q.push(x) ; Q.push(y) ;
            }
        }
    }
    return ans ;
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
    while(scanf("%d %d",&W,&H) && W!=0 && H!=0)
    {
        getchar() ;
        takeInput(W,H) ;
        memset(vis,false,sizeof vis) ;
        vector<pair<char,int> > vec ;
        vector<pair<char,int> >:: iterator it ;
        for(int i=1 ; i<=W ; i++)
        {
            for(int j=1 ; j<=H ; j++)
            {
                if(grid[i][j]!='.' && !vis[i][j])
                {
                    vis[i][j] = true ;
                    vec.push_back( make_pair(grid[i][j],bfs(i,j,grid[i][j])) ) ;
                }
            }
        }
        sort(vec.begin(),vec.end(),comparator) ;
        printf("Problem %d:\n",cs++) ;
        for(it=vec.begin() ; it!=vec.end() ; it++)
            printf("%c %d\n",it->first,it->second) ;
    }
    return 0 ;
}


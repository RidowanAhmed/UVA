#include<bits/stdc++.h>
using namespace std ;
#define MAX 10000
char grid[MAX][MAX] ;
bool vis[MAX][MAX] ;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int dir = 4 ;
int W, H ;
typedef struct
{
    char lang ;
    int num ;
}Data ;
bool comparator(Data a, Data b)
{
    if(a.num>b.num)
        return true ;
    else if(a.num==b.num)
        return a.lang<b.lang?true:false ;
    else
        return false ;
}
void bfs(int start_row,int start_col,char ch)
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
            if(x>0 && x<=W && y>0 && y<=H && grid[x][y]==ch && !vis[x][y])
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
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int T ,cs=1 ;
    scanf("%d",&T) ;
    while(T--)
    {
        scanf("%d %d",&W,&H) ;
        getchar() ;
        takeInput(W,H) ;
        memset(vis,false,sizeof vis) ;
        map<char,int> myMap ;
        map<char,int>:: iterator it ;
        for(int i=1 ; i<=W ; i++)
        {
            for(int j=1 ; j<=H ; j++)
            {
                if(!vis[i][j])
                {
                    myMap[grid[i][j]]++ ;
                    bfs(i,j,grid[i][j]) ;
                }
            }
        }
        int sz = myMap.size(),i=0 ;
        Data states[sz] ;
        for(it=myMap.begin() ; it!=myMap.end() ; it++,i++)
        {
            states[i].lang = it->first ; states[i].num = it->second ;
        }
        myMap.clear() ;
        sort(states,states+sz,comparator) ;
        printf("World #%d\n",cs++) ;
        for(i=0 ; i<sz ; i++)
            printf("%c: %d\n",states[i].lang,states[i].num) ;
    }
    return 0 ;
}

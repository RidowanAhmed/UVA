#include<bits/stdc++.h>
using namespace std ;
int main()
{
//    freopen("input.txt","r",stdin) ;
//    freopen("output.txt","w",stdout) ;
    int m , n , cnt=1 ,flag=0;
    char inp ;
    while( (cin>>n >>m) && m!=0 || n!=0 )
    {
        if(flag>0)
            cout<<endl ;
        char matrix[n][m] ;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                cin>>inp ;
                if(inp=='.')
                {
                    matrix[i][j] = '0' ;
                    continue ;
                }
                matrix[i][j] = inp ;
            }
        }
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(matrix[i][j]=='*')
                {
                    if(j+1<m && matrix[i][j+1]!='*')               matrix[i][j+1]   += 1 ;
                    if(j-1>=0 && matrix[i][j-1]!='*')              matrix[i][j-1]   += 1 ;
                    if(i+1<n && matrix[i+1][j]!='*')               matrix[i+1][j]   += 1 ;
                    if(i-1>=0 && matrix[i-1][j]  !='*')            matrix[i-1][j]   += 1 ;
                    if(i+1<n && j+1<m && matrix[i+1][j+1]!='*')    matrix[i+1][j+1] += 1 ;
                    if(i-1>=0 && j-1>=0 && matrix[i-1][j-1]!='*')  matrix[i-1][j-1] += 1 ;
                    if(i-1>=0 && j+1<m && matrix[i-1][j+1]!='*')   matrix[i-1][j+1] += 1 ;
                    if(i+1<n && j-1>=0 && matrix[i+1][j-1]!='*')   matrix[i+1][j-1] += 1 ;
                }
            }
        }
        cout<<"Field #" <<cnt++ <<":" <<endl ;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
                cout<<matrix[i][j] ;
            cout<<endl ;
        }
        flag++;
    }
    return 0 ;
}

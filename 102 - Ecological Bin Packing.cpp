#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int btl[9] ;
    while( (cin>>btl[0]) )
    {
        for(int i=1 ; i<9 ; i++)
            cin>>btl[i] ;
        int mvmnt[6] ;
        string nbtl[6] = {"BCG" , "BGC" , "CBG" , "CGB" , "GBC" , "GCB"} ;
        mvmnt[0] = btl[3]+btl[6] + btl[2]+btl[8] + btl[1]+btl[4] ;
        mvmnt[1] = btl[3]+btl[6] + btl[1]+btl[7] + btl[2]+btl[5] ;
        mvmnt[2] = btl[5]+btl[8] + btl[0]+btl[6] + btl[1]+btl[4] ;
        mvmnt[3] = btl[5]+btl[8] + btl[1]+btl[7] + btl[0]+btl[3] ;
        mvmnt[4] = btl[4]+btl[7] + btl[0]+btl[6] + btl[2]+btl[5] ;
        mvmnt[5] = btl[4]+btl[7] + btl[2]+btl[8] + btl[0]+btl[3] ;

        int minIndex =0 ;
    //    for(int i=0 ; i<6 ; i++)
    //        cout<<nbtl[i] <<"  " <<mvmnt[i] <<endl ;
    //    cout<<endl <<endl ;
        for(int i=0 ; i<6 ; i++)
            if(mvmnt[minIndex] > mvmnt[i])
                minIndex = i ;
        cout<<nbtl[minIndex] <<" " <<mvmnt[minIndex] <<endl ;
    }



    return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;
typedef struct
{
	int row;
	int col;	
} queenPosition;

bool backTrack(int n, int row, queenPosition[] position)
{
	if(n == row)
		return true;
	for(int col=0 ; col<n ; col++)
	{
		bool foundSafe = true;
		for(int q=0 ; q<row ; q++)
			if(position[q].col==col || (position[q].row-position[q].col == row-col) || (position[q].row+position[q].col == row+col))
			{
				foundSafe = false;
				break;
			}
		if(foundSafe)
		{
			position[row].row = row;
			position[col].col = col;
			if(backTrack(n, row+1 , position))
				return true;
		}
		return false;
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int row, col;
		scanf("%d %d", &row, &col);
		backTrack(row, col);
	}
	return 0;
}
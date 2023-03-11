#include<stdio.h>
#include<limits.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	int z[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++){
		scanf("%d",&z[i][j]);}	
	}
	int t[y][x];
	for(int i=0;i<y;i++){
	for(int j=0;j<x;j++){
		t[i][j]=z[j][i];
		printf("%d ",t[i][j]);}
		printf("\n");
	}
	
	return 0;
}
	


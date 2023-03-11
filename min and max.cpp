#include<stdio.h>
#include<limits.h>
int main()
{
	int a[8]={3,2,4,5,6,7,9,8};
	int max=INT_MIN;
	int min=INT_MAX;
	int maxind;
	int minind;
	for(int i=0;i<8;i++)
	{ if(max<a[i]){
		max=a[i];
		maxind=i;}
	}
	for(int  j=0;j<8;j++)
	{
			if (min>a[j]){
			min=a[j];
			minind=j;
		}
	
	}
	printf(" max is %d\n",max);
	printf(" min is %d\n",min);
	int temp;
	temp=a[maxind];
	a[maxind]=a[minind];
	a[minind]=temp;
	for( int i=0;i<8;i++)
	{ printf("%d\t",a[i]);}
	
	return 0;
	
}

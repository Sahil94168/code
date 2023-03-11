#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values a=");
	scanf("%d",&a);
	printf("Enter the values b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	printf("value of a=%d",a);
	printf("value of b=%d",b);
	
}

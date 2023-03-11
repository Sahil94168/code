#include<stdio.h>
#include<string.h>
int main()
{
	char c[]="IIITRanchi";
	char a[50]="iiitRanchi";
	
	printf("str1:%d\n",strlen(c));
	printf("strcat:%s\n",strcat(c,a));
	printf("strcpy:%s\n",strcpy(c,a));
	printf("strrev:%s\n",strrev(c));
	printf("strcmp:%d\n",strcmp(c,a));
	printf("strupr:%s\n",strupr(c));
	printf("strlwr:%s\n",strlwr(c));
	
}

#include<stdio.h>
#include<string.h>
int strlen(char*str1)
{ int i=0;
 while(str1[i]!='\0')
 {i++;
 }
	return i;
}
int main()
{
	char str1[100]="Hello";
	int x=strlen(str1);
	printf("%d",x);
}




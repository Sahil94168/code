#include<stdio.h>
  int factorial(int n)
  {
   if (n==0)
   return 1 ;
   else return(n*factorial(n-1));
   }
   
   int main()
  {
    int n ;
   long f ;
   printf("Enter a number");
   scanf("%d",&n);
   
   f=factorial(n);
   printf("Factorial is %d",f);
   return 0;
	
}

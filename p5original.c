#include<stdio.h>

int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}

int gcd(int a,int b) 
{
 int t;
 while (b != 0)
 {
   t = b;
   b = a%b;
   a = t;
 }
 return a;
}

void output(int a, int b, int c)
{
  printf("the gcd of %d and %d is %d\n",a,b,gcd);
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=gcd(a,b);
  output(a,b,c);
  return 0;
}
#include <stdio.h>

int input_side()
{
  printf("enter the side length:\n");
  scanf("%d",&a);
  return a;
}

int check_scalen(int a,int b,int c)
{
  int isscalen;
  if(a!=b&&a!=c&&b!=c)
  {
    isscalen=0;
  }
  return isscalen;
}

void output(int a,int b,int c,int isscalen)
 {
  if (isscalen==0)
  {
    printf("the trinagle is scalen for lengths %d.%d and 
   %d",a,b,c);
  }
  else
  {
    printf("the triangle is not a scalen");
  }  
 }  

int main()
{
  intput a,b,c,isscalen;
  int a=input_side();
  int b=input_side();
  int c=input_side();
  isscalen=check_isscalen(a,b,c);
  output(a,b,c,isscalen);
  return 0;
}
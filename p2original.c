#include <stdio.h>

int input_side()
{
  int side;
  printf("Enter the length of a side: ");
  scanf("%d", &side);
  return side; 
}

int check_scalene(int a, int b, int c)
{ 
  int is_scalene = (a != b ? (a != c ? (b != c ? 1 : 0) : 0) : 0);
  return is_scalene;
}

void output(int a, int b, int c, int is_scalene){
  if(is_scalene)
  {
    printf("The triangle with sides %d, %d and %d is a scalene triangle\n", a, b, c);
  }
  
  else
  {
    printf("The triangle with sides %d, %d and %d is not a scalene triangle\n", a, b, c);
  }
}

int main()
{
  int a, b, c, is_scalene;
  a = input_side();
  b = input_side();
  c = input_side();
  is_scalene = check_scalene(a, b, c);
  output(a, b, c, is_scalene);
  return 0;
}
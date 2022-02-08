 #include <stdio.h>

void input(float *a, float *b)

{
  printf("Enter the base and height of the triangle\n");
  scanf("%f %f",a,b);
}

void find_area(float a , float b, float *c)
{
  *c=((a*b)/2);
}

void output(float a, float b, float c)
{
  printf("The area of the traingle with base %f and height %f is %f", a, b, c);
}

int main(){
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;
}

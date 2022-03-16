#include <stdio.h>

int input_number(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}

int check_composite(int n)
{
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      return 1;
    }
  }
  return 0;
}

void output(int n, int composite){
  if(composite)
  {
    printf("%d is a composite number\n", n);
  }
  else
  {
    printf("%d is not a composite number\n", n);
  }
}

int main(){
  int n, is_composite;
  n = input_number();
  is_composite = check_composite(n);
  output(n, is_composite);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int input();
int gcd(int u, int v);
void output(int x,int y, int result);

int main()
{
    int a,b,ans;
    a = input();
    b = input();

    ans = gcd(a,b);

    output(a, b, ans);

    return 0;
}

int input()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  return a;
}

int gcd(int u, int v)
{
    int temp;

    while( v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

void output(int x,int y, int result)
{
    printf("GCD of %d and %d = %d.", x, y, result);
}
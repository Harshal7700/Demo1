//this local repo

#include <stdio.h>
struct ab 
{
    int a;
    int b;
    char c;
};
int main() {
    // Write C code here
  struct ab a;
  struct ab b;
  struct ab c;
  a.a=10;
  b.b=11;
  c.c=12;
  printf("%d\n",a.a);    //10
  printf("%d\n",b.a); 
  printf("%d\n",b.b);
  printf("%d\n",c.c);
  printf("%d\n",c.a);
  printf("%d\n",c.b);
  return 0;
}

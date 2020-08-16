#include <stdio.h>

int main(void) {
  float r, h, ans;
  printf("Enter r : ");
  scanf("%f", &r);
  printf("Enter h : ");
  scanf("%f", &h);
  ans = (2*3.14*r)*h+2*(3.14*(r*r));
  printf("Answer is %0.3f", ans);
  return 0;
}
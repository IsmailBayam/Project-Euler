#include <stdio.h>

int iseven(int a){
  if ( a % 2 == 0) return 1;
  else return 0;
}

int main(void) {
  int a;
  int b = 1; 
  int c = 0;
  int i = 0;
  int sum = 0;
  while(a < 4000000){
    a = b + c;
    b = c;
    c = a;
    if (iseven(a) == 1){
      sum += a;
    }
  }
  printf("%d", sum);
  return 0;
}

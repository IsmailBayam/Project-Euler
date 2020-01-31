#include <stdio.h>

int main(){

int num3 = 0, num5 = 0, num15 = 0;

int x;

for (x=1; x<4000000; x++){

  if (x % 3 == 0)
    {num3 += x;}

  if (x % 5 == 0)
    {num5 += x;}

  if (x % 15 == 0)
    {num15 += x;}
}

printf("%d", num3 + num5 - num15);
}
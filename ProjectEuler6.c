#include <stdio.h>
int toplamkare(int n){
  int i;
  int sayac = 0;
  for(i = 1;i <= n; i++){
    sayac += i;
  }

  return sayac * sayac;

}

int karetoplam(int n){
  int i;
  int sayac = 0;
  for(i = 1;i <= n; i++){
    sayac += i * i;
  }

  return sayac ;
}


int main()
{
int result = toplamkare(100) - karetoplam(100);
printf("%d", result);

return 0;
}

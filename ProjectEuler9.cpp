#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int result = 0;
  for(int a = 1; a < 1000; a++){
    for(int b = 1; b < 1000; b++){
      for(int c = 1; c < 1000; c++){
        if(sqrt(c * c) == sqrt(a*a + b*b) && a + b + c == 1000){
          int result = a * b * c;
          break;
        }
      }
    }
  }
  cout << result << endl;
}

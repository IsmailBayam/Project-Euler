#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

bool isprime(long long num)
{
    for (int i = 2; i <= (pow(num,0.5)); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}



int main() {
  long long sum = 2;
  
  for(int i = 3; i < 2000000; i += 2){
  if(isprime(i) == 1) {
    sum += i; 
  }
}
  cout << sum << endl;
}

#include <iostream>
using namespace std;
bool isprime(int num)
{
    for (int i = 2; i <= num/2; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[10001];
    arr[0] = 2;
    int count = 1;
    for (int i = 3; i ; i = i+2){
      if(isprime(i) == 1){
        arr[count] = i;
        count++;
      }
      if(count == 10001){
        break;
      }
    }
  cout << arr[10000] << endl;
} 

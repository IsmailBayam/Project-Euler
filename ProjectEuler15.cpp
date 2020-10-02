#include <iostream>
using namespace std;

int main() {
  
  long long arr[21][21];

    for(int j = 0; j < 21; j++){
      int i = 0;
      arr[i][j] = 1;
    }
    for(int j = 0; j < 21; j++){
      int i = 0;
      arr[j][i] = 1;
    }
    for (int i = 1; i < 21; i++){
      for(int j = 1; j < 21; j++){
        arr[i][j] = arr[i - 1][j] + arr[i][j-  1];
      }
    }
    cout << arr[20][20] << endl;

}

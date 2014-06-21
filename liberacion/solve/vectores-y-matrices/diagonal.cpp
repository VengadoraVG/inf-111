#include <cstring>
#include <vector>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int M[b][a];
  memset(M, 0, sizeof(M));

  for(int i=0; i<a; i++) 
    M[i/b][i] = 1;
  
  for(int i=0; i<b; i++) {
    for(int j=0; j<a; j++) 
      cout << M[i][j] << " ";
    cout << endl;
  }
}

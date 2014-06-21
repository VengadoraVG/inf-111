#include <cstring>
#include <vector>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b, col=0, c=0;
  cin >> a >> b;
  cout << "a=" << a << " b=" << b << endl;
  int M[b][a];
  memset(M, 0, sizeof(M));

  for(int i=0; i<a; i++) {
    if(c == (a/b)) {
      col++;
      c = 0;
    }
    c++;
    M[col][i] = 1;
  }
  
  for(int i=0; i<b; i++) {
    for(int j=0; j<a; j++) {
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
}

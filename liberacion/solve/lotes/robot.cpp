#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int r, n, x, pasos=0, pos=0;
  cin >> r >> n;

  while(n--) { //este ciclo se ejecuta n veces, decrementando n en 1 en cada loop.
    cin >> x;
    pasos += abs(pos-x);
    pos = x;
  }

  cout << "watts gastados: " << pasos*r << endl;
}

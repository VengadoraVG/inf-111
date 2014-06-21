#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string S;
  getline(cin, S);

  vector<int> conteo(1000, 0); //el código ASCII tiene 128 caracteres!! 
  //pero por seguridad, le pondremos 1000 ^w^.
  //En C++, puedes elegir si quieres inicializar o no el vector con algún valor.
  //en este caso, estamos pidiendo que inicialice el vector con 0s
  //(2do parámetro).
  
  for(int i=0; i<S.size(); i++) 
    conteo[S[i]]++;

  for(int i=0; i<1000; i++) 
    if(conteo[i] != 0) //solo imprime los caracteres que hayan aparecido
      cout << "'" << (char) i << "': " << conteo[i] << endl;
}

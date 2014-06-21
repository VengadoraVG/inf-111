#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> censoDeLetras(string cadena) {
  vector<int> conteo('z'-'a', 0);
  
  for(int i=0; i<cadena.size(); i++) 
    if(cadena[i] != ' ')
      conteo[cadena[i]-'a']++;

  return conteo;
}

int main() {
  int sw=true; //true es 1
  string S, Q;
  getline(cin, S); getline(cin, Q);

  vector<int> censoS = censoDeLetras(S);
  vector<int> censoQ = censoDeLetras(Q);

  for(int i=0; i<('z'-'a') && sw; i++) 
    if(censoS[i] != censoQ[i])
      sw=false; //false es 0

  if(!sw)
    cout << "NO ";
  cout << "SON ANAGRAMAS" << endl;
}

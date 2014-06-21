#include <vector>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> V(n+1);

  for(int i=0; i<n; i++) 
    cin >> V[i];

  int x;
  cin >> x;
  
  int mySpot=0;

  for(;V[mySpot] < x; mySpot++) ;

  for(int i=n; i>mySpot; i--)  
    V[i] = V[i-1];

  V[mySpot] = x;

  for(int i=0; i<n+1; i++)
    cout << V[i] << " ";
  cout << endl;
}

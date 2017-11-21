#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  cout << "Dame un ángulo ùnicamente en radianes :";
  double angulo;
  cin >> angulo;
  double coseno = cos(angulo);
  cout << "El coseno de " << angulo << " es "  << coseno << endl;
  return 0;
}

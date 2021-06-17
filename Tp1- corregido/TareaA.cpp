#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float a;

  cout << "-------------------------------------------" << endl;
  cout << "Conversor de metro/segundo a Kilometro/hora " << endl;
  cout << "                 M/s --> K/h            " << endl;
  cout << "-------------------------------------------" << endl;
  cout << "ingrese un valor(M/s):";
    cin >> a;
  cout << "Conversion (K/h) =";
  cout << a *3.6 << endl;
  return 0;
}

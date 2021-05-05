#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  //y = ax^2 +bx + cz
  float a,b,c;

  cout << "--------------------------------------" << endl;
  cout << "Calculadora de expresiones cuadraticas" << endl;
  cout << "          y = ax^2 +bx + c            " << endl;
  cout << "--------------------------------------" << endl;
  cout << "Ingrese primer termino(a):" << endl;
    cin >> a;
  cout << "Ingrese el segundo termino(b):" << endl;
    cin >> b;
  cout << "Ingrese el tercer termino(c):" << endl;
    cin >> c;
    if (pow(b,2)-4*a*c < 0)
    {
      cout << "----------------------------------------------------" << endl;
      cout << "Su expresion no esta definida en los numeros reales" << endl;
      cout << "----------------------------------------------------" << endl;

        return 0;
    }else
    {
      cout << "Primer valor: X1=";
        cout << (-b+sqrt(pow(b,2)-4*a*c))/(2*a) << endl;
      cout << "Segundo valor X2=";
        cout << (-b-sqrt(pow(b,2)-4*a*c))/(2*a) << endl;
    }
  return 0;
}

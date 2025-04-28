
#include <iostream>

using namespace std;

int main()
{

  int numero;

  cout << "numero positivo entero:";
  cin >> numero; // ingresar un numero

  if (numero % 3 == 0 && numero % 5 == 0)
  {
    cout << "FizzBuzz";
  }
  else if (numero % 3 == 0)
  {
    cout << "Fizz";
  }
  else if (numero % 5 == 0)
  {
    cout << "Buzz";
  }
  else
  {
    cout << "walterflores" << endl;
  }

  return 0;
}
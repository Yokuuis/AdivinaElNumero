#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
   int n, u;

   cout << "ADIVINA EL NUMERO QUE ESTOY PENSANDO" << endl;

   system("pause");
   system("cls");

   cout << "Ingrese un numero del 1-10: "; 
   cin >> u;

   srand(time(0));
   n = rand() % 10 + 1;

   while (n != u) {
      cout << "No estaba pensando ese numero, vuelve a intentarlo." << endl;
      cout << "Ingrese un numero: "; 
      cin >> u;
   }

   cout << "¡Adivinaste el numero que estaba pensando! Era: " << n << endl;

   return 0;
}

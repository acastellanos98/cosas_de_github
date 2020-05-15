//Función Factorial

#include <iostream>
using namespace std;

int fact(int n) { 
   if ((n==0)||(n==1))
      return 1; 
   else
      return n*fact(n-1);
}

int main() {
   int n;
   cout << "Por favor introduzca un número" << endl;
   cin >> n;
   cout << "El factorial de " << n << " es " << fact(n) << endl;
   return 0;
}
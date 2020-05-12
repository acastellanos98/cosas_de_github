#include <iostream>
using namespace std;

int suma(int a, int b){
	return a+b;
}

int main(){
	cout << "Hola mundo!" << endl;
	int n;
	cout << "Por favor introduce un número entero" << endl;
	cin >> n;
	cout << "El número es: "<< n << endl;
	int i = 0;
	for (i; i < n; i++){
		cout << i << endl;
	}

	int k = 0;
	while (k<5){
		cout << k << endl;
		k++;
	}

	cout << suma(3,4) << endl;

	return 0;
}
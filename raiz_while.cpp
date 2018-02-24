/*

Programa em C++ que imprime uma tabela de raízes quadradas de todos os números começando de 0 e indo até 100, utilizando o comando while.

*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int a=0;

	while(a<=100){
		cout<<"\nA raiz quadrada de "<<a<<" é igual a " <<sqrt(a);
		a=a+1;
	}

	
	cout<<"\n\n";
	return 0;


}

//C�digo copiado de internet

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int k,ans=0;
	cin>>k; //Lee un numero desde el teclado.
	int a[k]; //Inicializa un arreglo de n elementos

	for(int i=0;i<k;i++)
		cin>>a[i]; //Guarda un n�mero en cada posici�n del arreglo

	sort(a,a+k); //funci�n gen�rica en la biblioteca est�ndar de c++ que hace una clasificaci�n por comparaci�n. Ordena los n�meros de menor a mayor.

	for(int i=0;i<(k/2)+1;i++) ans+= (a[i]/2)+1; //Recorre la lista y hace que la mayor�a de los ciudadanos vote

	cout<<ans<<endl;

	return 0;
}

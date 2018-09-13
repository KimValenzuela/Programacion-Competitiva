//C�digo copiado de internet

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n; //Lee un n�mero del teclado
    
    int arr[n]; //inicializa un arreglo de n numeros
    for(int i=0 ; i<n ; ++i){
    	cin>>arr[i]; //guarda un numero en cada posicion
    }
    
    int dif = 2000000; // se almacena un numero grande en esta variable para asegurar que las diferencias posteriores siempre ser�n m�s peque�as
    
    for(int i = (1<<(n-1))-1 ; i>=0 ; --i){ //La din�mica de este bloque consiste en utilizar n�meros binarios para hacer todas las combinaciones posibles.
        int aux = 0;						// Si es 1, lo suma a la variable aux, si es 0, lo resta de la variable aux.
        									//Luego la diferencia final ser� el n�mero m�nimo entre la diferencia y el valor absoluto de la variable aux. 
        for(int j=0 ; j<n ; ++j)
            if(i & (1<<j)) aux += arr[j];
            else aux -= arr[j];
        
        dif = min(dif,abs(aux));
    }
    
    cout<<dif;
    
    return 0;
}

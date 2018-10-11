#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int c, r;
	
	for(int i=0 ; i<n ; i++){
		cin>>c>>r;
		int rest = c - r;
		set<int> nn; //Guarda elementos en una lista de forma ordenada
		cout<<"Case #"<<i+1<<":";
		if(rest == 0) cout<<" 0"<<endl;
		else{
			for(int j=1 ; j*j<=rest ; j++){ //j*j para aproximar a un entero la raiz cuadrada de rest
				if(rest%j == 0){
					nn.insert(rest/j); //Guarda en la lista el cociente entero 
					nn.insert(j); //El divisor tambien es un factor 
				} 
			}
			for(set<int>::iterator it = nn.begin() ; it != nn.end() ; it++){ //Iterador para imprimir los datos de la lista
				if(*it > r) cout<<" "<<*it; //Imprime solo los valores de Q mayores que R
			}
			cout<<endl;
		}
	}
	
	return 0;
}

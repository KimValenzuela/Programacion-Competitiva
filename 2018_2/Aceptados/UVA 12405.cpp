//Sacado de internet

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,j,c,i;
    char a[110];
    while(cin>>t)
    {
    for(j=1 ; j<=t ; j++)
    {
        cin>>n>>a;
        c = 0; //Contador para calcular cantidad de espantapájaros
        for(i=0 ; i<n ; )
        {
            if(a[i] == '#') i++; //Si el caracter almacenado en la posición i del arreglo a es igual a # se corre una posición
            else{
            	c++; //Si no, aumenta el contador en 1
            	i += 3; //ya que el espantapájaros abarca 3 bloques, se aumenta el iterador en 3
            }
        }
        cout<<"Case "<<j<<": "<<c<<endl;
 
    }
    break;
    }
 
    return 0;
}

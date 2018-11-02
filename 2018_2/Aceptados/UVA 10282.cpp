#include <iostream>
#include <map>
//Sacado de internet

#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    map<string, string> conversion; //Se crea un map de la clase contenedora asociativa de la STL
    
    string temp, second; 
    getline(cin, temp); //Lee desde el teclado una linea completa
    
    while (temp != "") 
    {
        stringstream ss(temp); //Para convertir a string y concatenar
        ss >> temp >> second; //Se concatenan los strings
        conversion[second] = temp; 
        getline(cin, temp);
    }
    
    while (cin >> temp)
    {
        map<string, string>::const_iterator iter = conversion.find(temp); //Iterador que busca la palabra almacenada en temp
        if (iter == conversion.end()) //Si el iterador llega al final, es porque no encontró la palabra
            cout << "eh\n";
        else
            cout << iter->second << '\n'; //De lo contrario, lo imprime
    }
    return 0;
}

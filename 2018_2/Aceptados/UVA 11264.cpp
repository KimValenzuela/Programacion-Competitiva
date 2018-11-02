//Código sacado de internet

#include <iostream>
#include <vector>

using namespace std;

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int n;
        cin >> n;

        vector<int> values; //Se crea un vector de la clase contenedora de la STL
        for (int i = 0; i < n; ++i)
        {
            int value;
            cin >> value;
            values.push_back(value); //Se inserta un elemento en el vector
        }

        int sum = 1;
        int coins = values.size() > 1? 2 : 1; //Si el tamaño del vector es mayor que 1, coins = 2, si no, coins = 1
        // Consigue la mayor cantidad de monedas de valores más pequeños como sea posible.
        for (int i = 1; i < values.size() - 1; ++i)
            if (sum + values[i] < values[i + 1])
            {
                sum += values[i];
                ++coins;
            }

        cout << coins << endl;
    }
    return 0;
}

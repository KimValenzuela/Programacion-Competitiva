//Sacado de internet

#include <cstdio>
#include <queue>
#include <functional>

using namespace std;

int main() {
	int n;

	while (scanf("%d", &n), n) {
		priority_queue<int, vector<int>, greater<int> > q; 

		while (n--) {
			int x;
			scanf("%d", &x);
			q.push(x); //Inserta un elemento
		}

		int total = 0, cost = 0;
		while (q.size() > 1) { //Mientras el tamaño de la cola sea mayor que 1
			total = q.top(); //Total = Elemento superior de la cola
			q.pop(); //Se elimina el elemento superior
			total += q.top(); //Se suma al total el elemento superior que queda luego de la eliminacion
			q.pop(); //Se vuelve a eliminar el elemento superior
			cost += total; //Se va acumulando en la variable cost la suma de los 2 numeros superiores de la cola
			q.push(total); //Se inserta el total para ser sumado nuevamente
		}

		printf("%d\n", cost);
	}

	return 0;
}

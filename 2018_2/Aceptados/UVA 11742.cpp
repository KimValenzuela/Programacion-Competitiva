//Sacado de internet

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;
//variables globales
int a[8]; //Tamaño del grupo
int conditons[20][3];
int n, m;
 
bool check() {
    for (int i = 0; i < m; i++) {
        int position1, position2;
        for (int j = 0; j < n; j++) {
            if (a[j] == conditons[i][0]) {
                position1 = j;
            }
            if (a[j] == conditons[i][1]) {
                position2 = j;
            }
        }
        int difference = (int) abs(position1 - position2); //distancia de ambas posiciones
        if (conditons[i][2] > 0) {
            if (difference > (int) abs(conditons[i][2])) {
                return false;
            }
        }
        if (conditons[i][2] < 0) {
            if (difference < (int) abs(conditons[i][2])) {
                return false;
            }
        }
    }
    return true;
}
 
int main() {
    while (1) {
        int count = 0;
        scanf("%d %d", &n, &m);
        if (n == 0) { //Si el tamaño del grupo es cero
            return 0;
        }
        for (int i = 0; i < m; ++i) { //Condiciones para cada integrante del grupo
            scanf("%d %d %d", &conditons[i][0], &conditons[i][1], &conditons[i][2]);
        }
 
        for (int i = 0; i < n; i++) {
            a[i] = i; //enumerar los integrantes del grupo de 0 a n-1
        }
        do {
            if (check()) {
                count++;
            }
        } while (next_permutation(a, a + n)); //Devuelve la siguiente permutación en orden lexicográfico
                                              //Falso si se genera la primera permutación
        printf("%d\n", count);
        memset(a, 0, 8); //Inicializa en 0 el arreglo a
        memset(conditons, 0, sizeof(conditons[0][0]) * m * n); //Inicializa las condiciones a 0
        count = 0;
    }
    return 0;
}

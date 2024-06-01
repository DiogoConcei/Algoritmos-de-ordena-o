#include <iostream>

using namespace std;

int main() {
    int array[] = {10, 5, 1, 9, 20, 13, 4, 3, 17, 7, 18};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Array antes da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < length; i++) {
        // Variável para marcar a posição atual do cursor
        int arrow = i;

        // Enquanto o elemento anterior for maior que o elemento atual e a posição for maior que 0
        while (array[arrow - 1] > array[arrow] && arrow > 0) {
            // Troca os elementos de posição
            int aux = array[arrow];
            array[arrow] = array[arrow - 1];
            array[arrow - 1] = aux;
            // Move o cursor uma posição para trás
            arrow -= 1;
        }
    }

    cout << "Array depois da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;


    return 0;
}

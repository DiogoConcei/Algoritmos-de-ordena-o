#include <iostream> // Inclui a biblioteca de entrada e saída padrão

using namespace std;

int main() {
    int array[] = {2, 8, 5, 3, 9, 4, 1, 10, 15, 21, 99};
    int length = sizeof(array) / sizeof(int);

    cout << "Array antes da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < length; i++) {
        // Assume que o menor elemento é o primeiro não ordenado
        int min_item = i;
        // Percorre o restante do array para encontrar o menor elemento
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[min_item]) {
                min_item = j;
            }
        }

        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        if (min_item != i) {
            int aux = array[min_item];
            array[min_item] = array[i];
            array[i] = aux;
        }
    }

    cout << "Array depois da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

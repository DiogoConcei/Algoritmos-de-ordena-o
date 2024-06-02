#include <iostream>

using namespace std;

int FindMin(const int unordered_array[],int size) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (unordered_array[i] < unordered_array[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

void NormalSelectionSort(int unordered_array[],int size) {
    for (int i = 0; i < size; i++) {
        // Assume que o menor elemento é o primeiro não ordenado
        int min_item = i;
        // Percorre o restante do array para encontrar o menor elemento
        for (int j = i + 1; j < size; j++) {
            if (unordered_array[j] < unordered_array[min_item]) {
                min_item = j;
            }
        }

        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        if (min_item != i) {
            int aux = unordered_array[min_item];
            unordered_array[min_item] = unordered_array[i];
            unordered_array[i] = aux;
        }
    }
}

void RecursiveSelectionSort(int unordered_array[],int size) {
    if (size <= 1) {
        return;
    }

    // Encontra o índice do menor elemento
    int min_index = FindMin(unordered_array, size);

    // Troca o menor elemento encontrado com o primeiro elemento
    if (min_index != 0) {
        int temp = unordered_array[0];
        unordered_array[0] = unordered_array[min_index];
        unordered_array[min_index] = temp;
    }

    // Chama recursivamente para ordenar o restante do array
    RecursiveSelectionSort(unordered_array + 1, size - 1);

}

int main() {
    int array[] = {2, 8, 5, 3, 9, 4, 1, 10, 15, 21, 99};
    int length = sizeof(array) / sizeof(int);
    int option;

    cout << "Array antes da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Dejesa usar o Bubble sort comum ou o recursivo ? \n";
    cout << "Desempenho minimamente diferente \n";
    cout << "1 - Selection Sort sorte comum \n";
    cout << "2 - Selection Sort recursivo \n";
    cin >> option;


    switch (option) {
        case 1:
            NormalSelectionSort(array, length);
            break;
        case 2:
            RecursiveSelectionSort(array, length);
            break;
        default:
            cout << "Opcao invalida \n";
            break;
    }

    cout << "Array depois da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

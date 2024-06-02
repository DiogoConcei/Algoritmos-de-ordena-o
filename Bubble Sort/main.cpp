#include <iostream>

using namespace std;

void RecursiveBubbleSort(int *unordered_array, int size) {
    // Caso base da recursão
    if(size == 1) {
        return;
    }

    // Caso recursivo
    // Aqui borbulhamos o maior elemento para o topo
    // Realizando uma troca simples entre o menor valor e o maior valor
    for (int i = 0; i < size - 1; i++) {
        if(unordered_array[i] > unordered_array[i + 1]) {
            int temp = unordered_array[i];
            unordered_array[i] = unordered_array[i + 1];
            unordered_array[i + 1] = temp;
        }
    }

    // Chamamos novamente a função
    // Para que seja possível ordernar os outros itens
    RecursiveBubbleSort(unordered_array, size - 1);
    // Porém não verificaremos a ultima posição
    // Pois já movemos o maior item até ela
}

void NormalBubbleSort(int *unordered_array, int size) {
    for (int j = 0; j < size; j ++) {
        for(int i = 0; i < size; i++) {
            if(unordered_array[j] < unordered_array[i]) {
                int temp = unordered_array[j];
                unordered_array[j] = unordered_array[i];
                unordered_array[i] = temp;
            }
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(array)/sizeof(array[0]);
    int option;

    cout << "\nArray antes da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Dejesa usar o Bubble sort comum ou o recursivo ? \n";
    cout << "Desempenho minimamente diferente \n";
    cout << "1 - Bubble sorte comum \n";
    cout << "2 - Bubble sorte recursivo \n";
    cin >> option;


    switch (option) {
        case 1:
            NormalBubbleSort(array, length);
            break;
        case 2:
            RecursiveBubbleSort(array, length);
            break;
        default:
            cout << "Opcao invalida \n";
            break;
    }



    cout << "\nArray depois da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
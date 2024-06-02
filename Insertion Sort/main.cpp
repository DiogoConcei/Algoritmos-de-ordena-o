#include <iostream>

using namespace std;

void RecursiveInsertionSort(int *unorderedArray, int size) {
    // Caso base: se o array tem tamanho 1 ou 0, já está ordenado
    if (size <= 1) {
        return;
    }

    // Ordenar os primeiros size-1 elementos
    RecursiveInsertionSort(unorderedArray, size - 1);

    // Inserir o último elemento na posição correta no array ordenado
    int last = unorderedArray[size - 1];
    int j = size - 2;

    // Mover os elementos do subArray ordenado que são maiores que o last
    while (j >= 0 && unorderedArray[j] > last) {
        unorderedArray[j + 1] = unorderedArray[j];
        j--;
    }
    unorderedArray[j + 1] = last;
}

void NormalInsertionSort(int *UnorderedArray, int size) {
    for (int i = 1; i < size; i++) {
        // Variável para marcar a posição atual do cursor
        int arrow = i;

        // Enquanto o elemento anterior for maior que o elemento atual
        while (UnorderedArray[arrow - 1] > UnorderedArray[arrow] && arrow > 0) {
            // Troca os elementos de posição
            int aux = UnorderedArray[arrow];
            UnorderedArray[arrow] = UnorderedArray[arrow - 1];
            UnorderedArray[arrow - 1] = aux;
            // Move o cursor uma posição para trás
            arrow -= 1;
        }
}
    }

int main() {
    int array[] = {10, 5, 1, 9, 20, 13, 4, 3, 17, 7, 18};
    int length = sizeof(array) / sizeof(array[0]);
    int option;

    cout << "Array antes da ordenacao: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;


    cout << "Dejesa usar o Bubble sort comum ou o recursivo ? \n";
    cout << "Desempenho minimamente diferente \n";
    cout << "1 - Insertion Sort sorte comum \n";
    cout << "2 - Insertion Sort recursivo \n";
    cin >> option;


    switch (option) {
        case 1:
            NormalInsertionSort(array, length);
            break;
        case 2:
            RecursiveInsertionSort(array, length);
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
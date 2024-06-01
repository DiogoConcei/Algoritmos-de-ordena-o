#include <iostream>

using namespace std;

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(array)/sizeof(array[0]);
    cout << "Array antes da ordenacao: ";
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < tamanho; j ++) {
        for(int i = 0; i < tamanho; i++) {
            if(array[j] < array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }



    cout << "Array depois da ordenacao: ";
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
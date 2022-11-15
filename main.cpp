#include <iostream>
using namespace std;

template<typename S>
void swap(S * posicionAnterior, S *posicionSiguiente){
  S temporal = *posicionAnterior;
  *posicionAnterior=*posicionSiguiente;
  *posicionSiguiente=temporal;`
}

template<typename S>
void bubbleSort(S arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
  
void arrayFinal(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[7] = {3,7,4,6,9,4,2};
    int n=7;
    bubbleSort<int>(arr, n);
    arrayFinal(arr, n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
template<typename T>
//整数或浮点数皆可使用
void bubbleSort(T arr[], int len)
{
    int i, j;  T temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
        if (arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
}
// print array
void printArray(int array[], int size) {
    for (int i = 0; i < size ; i++){
        cout << " " << array[i];
    }
    cout << "\n";
}


int main() {

    int data[] = {5, 8, 6, 3, 9, 2, 1, 7};

    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted array in ascending order: " << endl;
    printArray(data, size);


    return 0;
}
// 6-1 ¹®Á¦
#include <iostream>
using namespace std;

void Print(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    const int size = 7;
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
    Print(arr, size);
}

// 6-2 ¹®Á¦
#include <iostream>
using namespace std;

void Print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void Reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    const int size = 7;
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
    Reverse(arr, size);
    Print(arr, size);
}

// 6-3 ¹®Á¦
#include <iostream>
using namespace std;

void Print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void Sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }
}

int main() {
    const int size = 7;
    int arr[10] = { 7, 1, 3, 5, 6, 2, 4 };
    Sort(arr, size);
    Print(arr, size);
}

#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++)
        for (int j = i; j > 0 && arr[j] < arr[j-1]; j--)
            swap(arr[j], arr[j-1]);
}

int main()
{
    int input[] = {5, 2, 4, 6, 1, 3};
    int l = sizeof(input) / sizeof(*input);

    insertionSort(input, l);

    cout << "{";
    for (int j = 0; j < l; j++) {
        cout << input[j];
        if (j < l - 1) {
            cout << ", ";
        }
    }
    cout << "}\n";
}
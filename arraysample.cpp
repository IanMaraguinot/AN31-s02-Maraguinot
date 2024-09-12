#include <iostream>
#include <limits>
using namespace std;

void modifyElement(int arr[], int idx, int newVal) {
    arr[idx] = newVal;
}

void findMinMax(int arr[], int size, int &min, int &max) {
    min = numeric_limits<int>::max();
    max = numeric_limits<int>::min();
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}

int main() {
    int size, index, newValue, min, max;

    cout << "Array size: "; 
    cin >> size;
    int arr[size];
    cout << "Elements: ";
    for (int i = 0; i < size; cin >> arr[i++]);

    cout << "Modify index: "; 
    cin >> index;
    cout << "New value: "; 
    cin >> newValue;
    modifyElement(arr, index, newValue);

    findMinMax(arr, size, min, max);
    cout << "Min: " << min << ", Max: " << max << endl;

    return 0;
}

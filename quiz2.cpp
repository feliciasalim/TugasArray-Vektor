#include <iostream>
using namespace std;

int freq(int arr[], int n, int angka) {
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == angka) {
            frequency++;
        }
    }
    return frequency;
}

int main() {
    int arr[] = {1,2,2,3,3,3,5};
    int n = sizeof(arr) / sizeof(arr[0]); //panjang array
    int angka;
    cout<< "Input: ";
    cin>> angka;
    int frequency = freq(arr, n, angka);
    if (frequency > 0) cout << "Output: Frequency dari angka " << angka << " di dalam array adalah " << frequency << endl;
    else cout << "Output: Angka tidak ditemukan" << endl;

    return 0;
}

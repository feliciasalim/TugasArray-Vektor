#include <iostream>
#include <vector>
using namespace std;

void insertionsort(vector<int>& myVector) {
    int n = myVector.size();
    int key, j;
    for (int i = 1; i < n; i++) {
        key = myVector[i];
        j = i - 1;
        while (j >= 0 && myVector[j] > key) {
            myVector[j+1] = myVector[j];
            j--;
        }
        myVector[j+1] = key;
    }
}

int main() {
    vector<int> myVector;
    int n;
    cout << "jmlh bilangan: ";
    cin >> n;
    cout << "Input: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        myVector.push_back(x);
    }
    insertionsort(myVector);
    cout << "Output: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}

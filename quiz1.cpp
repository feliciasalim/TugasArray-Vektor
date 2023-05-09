#include <iostream>
#include <vector>
using namespace std;

void duplikat(vector<int>& myVector) {
    for (int i = 0; i < myVector.size(); i++) {
        for (int j = i + 1; j < myVector.size(); j++) {
            if (myVector[i] == myVector[j]) {
                myVector.erase(myVector.begin() + j); //v.erase = remove elements from a container from the specified position or range.
                j--;
            }
        }
    }
}

int main() {
    vector<int> myVector = {1,2,2,3,4,5,5};
    cout << "b4: " << endl;
    for (int i = 0; i < myVector.size(); i++) {
         if (i==myVector.size()-1) 
            cout << myVector[i];
        else cout << myVector[i] << ", ";
    }
    cout << endl;
    duplikat(myVector);
    cout << "after: " << endl;
    for (int i = 0; i < myVector.size(); i++) {
        if (i==myVector.size()-1) 
            cout << myVector[i];
        else cout << myVector[i] << ", ";
    }
    cout << endl;

    return 0;
}


#include <iostream>
using namespace std;

void reverseArray(int array[], int size){
    
    for(int i = size - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
}

int main() {
    int array[5] = {1,2,3,4,5};
    
    cout << "Reverse array = ";
    reverseArray(array, 5);
    
    
    return 0;
}
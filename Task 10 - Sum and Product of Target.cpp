// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sumOfTarget(int array[], int size){
    cout << "Enter taeget for the sum :";
    int target;
    cin >> target;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(array[i] + array[j] == target){
                cout << "index = " << i << " , " << j << endl;
                cout << "values = " << array[i] << " , " << array[j] << endl;
            }
        }
    }
    cout << "\n\n";
}
void productOfTarget(int array[], int size){
    cout << "Enter taeget for the product :";
    int target;
    cin >> target;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(array[i] * array[j] == target){
                cout << "index = " << i << " and " << j << endl;
                cout << "values = " << array[i] << " and " << array[j] << endl;
            }
        }
    }
}

int main() {
    int array[5] = {10,2,3,4,9};
    
    sumOfTarget(array, 5);
    productOfTarget(array, 5);
    return 0;
}
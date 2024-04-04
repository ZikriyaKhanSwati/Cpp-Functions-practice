// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Passing count as reference so we can modify its value
// and use it in main function
void removeDuplicate(int array1[], int size1, int array2[], int size2, int newArray[], int size3, int& count){
    count = 0;
    
    for(int i = 0; i < size1; i++){
        bool duplicate = false;
        for(int j = 0; j < count; j++){
            if(array1[i] == newArray[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            newArray[count++] = array1[i];
        }
    }
    
    for(int i = 0; i < size2; i++){
        bool duplicate = false;
        for(int j = 0; j < count; j++){
            if(array2[i] == newArray[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            newArray[count++] = array2[i];
        }
    }
}

int main() {
    int array1[5] = {1,2,3,5,3};
    int array2[5] = {4,7,8,2,9};
    int count;
    int newArray[10];
    
    removeDuplicate(array1, 5, array2, 5, newArray, 10, count);
    
    cout << "New Array without duplicates :";
    // Now that count's value is modified in the 'removeDuplicate' function,
    // we can use it as the size of 'newArray' and print only unique elements
    for(int i = 0; i < count; i++){
        cout << newArray[i] << " ";
    }
    
    
    return 0;
}
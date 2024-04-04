// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void min(int array[], int size){
    int minimum = array[0];
    int secMinimum;
    for(int i = 1; i < size; i++){
        if(array[i] < minimum){
            /* Assigning max to secMax for camparing later*/
            secMinimum = minimum;
            minimum = array[i];
        }
        else if(array[i] < secMinimum && array[i] > minimum){
            /* Checking if there is a value which
            is greater than secMax*/
            secMinimum = array[i];
        }
        
    }
    cout << "Minimum :" << minimum << endl;
    cout << "Second Minimum :" << secMinimum;
}

int main() {
    int array[5] = {0,1,10,11,90};
    min(array, 5);

    return 0;
}
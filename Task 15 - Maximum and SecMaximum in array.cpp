// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void max(int array[], int size){
    int maximum = array[0];
    int secMaximum;
    for(int i = 1; i < size; i++){
        if(array[i] > maximum){
            /* Assigning max to secMax for camparing later*/
            secMaximum = maximum;
            maximum = array[i];
        }
        else if(array[i] > secMaximum && array[i] < maximum){
            /* Checking if there is a value which
            is greater than secMax*/
            secMaximum = array[i];
        }
        
    }
    cout << "Maximum :" << maximum << endl;
    cout << "Second Maximum :" << secMaximum;
}

int main() {
    int array[5] = {8,9,10,99,11};
    max(array, 5);

    return 0;
}
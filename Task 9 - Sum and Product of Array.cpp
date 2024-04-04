// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sumOfArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

int productOfArray(int array[], int size){
    int product = 1;
    for(int i = 0; i < size; i++){
        product *= array[i];
    }
    return product;
}

int main() {
    int array[5] = {10,2,3,4,9};
    int result;
   
    result = sumOfArray(array, 5);
    cout << "Sum of array = " << result << endl;
    
    result = productOfArray(array, 5);
    cout << "Product of array = " << result;
    return 0;
}
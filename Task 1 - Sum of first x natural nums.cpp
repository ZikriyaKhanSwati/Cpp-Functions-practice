// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sumOf(int a){
    int result = 0;
    for(int i = 1; i <= a; i++){
        result += i;
    }
    return result;
}

int main() {
    cout << "Enter range for the sum :";
    int range;
    cin >> range;
    
    int sum = sumOf(range); 
    cout << "Sum of first " << range << " naural numbers is :";
    cout << sum;

    return 0;
}
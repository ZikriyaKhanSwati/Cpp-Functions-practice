// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void multiplicationTable(int a){
    for(int i = 1; i <= 10; i++){
        cout << a << " x " << i << " = " << i*a << endl;
    }
}

int main() {
    cout << "Type number for Multiplication Table :";
    int number;
    cin >> number;
    
    multiplicationTable(number);

    return 0;
}
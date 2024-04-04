// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    int result;
    result = factorial(num);
    cout << "Factorial of " << num << " = " << result;
    return 0;
}
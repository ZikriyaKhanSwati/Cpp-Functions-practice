// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int powerOfNum(int base, int power){
    int result = 1;
    for(int i = 0; i < power; i++){
            result *= base;
    }
    return result;
}

int main() {
    int base, power;
    cout << "Base :";
    cin >> base;
    cout << "Power :";
    cin >> power;
    
    int result;
    
    result = powerOfNum(base , power);
    cout << "result = " << result;
    
    return 0;
}
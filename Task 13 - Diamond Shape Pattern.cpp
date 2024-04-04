// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void triangle(){
    int rows = 5;
    for(int i = 1; i <= rows; i++){
        for(int j = rows; j > i; j--){
            cout << "  ";
        }
        for(int k = 0; k < i * 2 - 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    // In 2nd loop, i = rows-1 because 
    // middle line is printed in the first loop
    for(int i = rows-1; i >= 1; i--){
        for(int j = rows; j > i; j--){
            cout << "  ";
        }
        for(int k = 0; k < i * 2 - 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    triangle();
    

    return 0;
}
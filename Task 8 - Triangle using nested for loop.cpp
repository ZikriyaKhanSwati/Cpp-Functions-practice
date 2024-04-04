// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void triangle(int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;
    triangle(rows);

    return 0;
}
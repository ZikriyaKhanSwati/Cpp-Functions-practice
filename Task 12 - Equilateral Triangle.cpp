// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void triangle(){
    cout << "Enter no. of rows :";
    int rows;
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        // Initialize i with 1 because it will be used in the calculation in k loop
        
        for(int j = rows; j > i; j--){
            cout << "  ";
        }
        
		//Here i is used in calculation for k loop's ending point
        //That's why it can't be zero
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
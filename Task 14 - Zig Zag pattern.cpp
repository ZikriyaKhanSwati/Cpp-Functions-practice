// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void zigZag(){
    int rows = 20;
    for(int i = 0; i <= rows; i++){
        if(i % 4 == 0){
            cout << "*" << endl; 
        }
        else if(i % 2 == 0){
            cout << "    *" << endl;
        }
        else{
            cout << "  *" << endl;
        }
    }
}

int main() {
    zigZag();
    

    return 0;
}
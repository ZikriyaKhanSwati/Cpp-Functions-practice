
#include <iostream>
using namespace std;

void fibonacciSeries(int range){
    int a = 0;
    int b = 1;
    int next;
    cout << "0 1 ";
    for(int i = 2; i < range; i++){
        next = a+b;
        cout << next << " ";
        a = b;
        b = next;
    }
}

int main() {
    cout << "Enter nth term for Fibonacci Series :";
    int range;
    cin >> range;
    
    cout << "Fibonacci Series upto " << range << "th term :";
    fibonacciSeries(range);
    
    
    return 0;
}
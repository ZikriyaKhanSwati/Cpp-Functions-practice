
#include <iostream>
using namespace std;

void reverseString(string word){
    int count = 0;
    for(int i = word.size() - 1; i >=0; i--){
        cout << word[i];
        
    }
}

int main() {
    cout << "Type a word :";
    string word;
    cin >> word;
    
    reverseString(word);
    
    
    return 0;
}
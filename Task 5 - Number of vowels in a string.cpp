
#include <iostream>
using namespace std;

void checkForVowel(string word){
    int count = 0;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == 'a' ||word[i] == 'e' ||word[i] == 'i' ||word[i] == 'o' ||word[i] == 'u'){
            count += 1;
        }
    }
    cout << word << " contains " << count << " vowels";
}

int main() {
    cout << "Type a word :";
    string word;
    cin >> word;
    
    checkForVowel(word);
    
    
    return 0;
}
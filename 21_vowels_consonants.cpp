#include <iostream>
#include <string>
using namespace std;


void volCon(string s){
    int vowels = 0, consonants = 0;

   for (int i = 0; i < s.length(); i++) {
    char c = s[i];

    // 1. uppercase → lowercase
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;          // 'A' is 65, 'a' is 97. What's the gap?
    }

    // 2. vowel?
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        vowels++;
    }
    // 3. other letter?
    else if (c >= 'b' && c <= 'z') {
        consonants++;
    }
    // anything else is ignored automatically
}
cout << "vowels " << vowels << ", consonants " << consonants << endl;
}

int main() {
    string s;
    getline(cin, s);      // reads the whole line, spaces included
    volCon(s);
    return 0;
}
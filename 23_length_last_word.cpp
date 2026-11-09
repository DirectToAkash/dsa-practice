#include <iostream>
#include <string>
using namespace std;




int lastLength(string s){
    int count = 0;
    int right = s.length() - 1;


    while (right >= 0 && s[right] == ' ') {
        right--;
    }

    
    while (right >= 0 && s[right] != ' ') {
        count++;
        right--;
    }
    return count;
}

int main(){
    string s;
    getline(cin, s);
    cout << lastLength(s) << endl;
    
    return 0;
}
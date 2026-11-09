#include <iostream>
#include <string>
using namespace std;


bool isGood(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

char lower(char c){
    if (c >= 'A' && c <= 'Z') c = c + 32;
    return c;
}

bool isPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (!isGood(s[left]))  { left++;  continue; }  
        if (!isGood(s[right])) { right--;  continue; }   

        if (lower(s[left]) != lower(s[right])) {
            return 0;          
        }
        left++;
        right--;                    
    }
    return 1;                 
}

int main(){
    string s;
    getline(cin, s);
    if (isPalindrome(s)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}
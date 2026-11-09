#include <iostream>
#include <string>                       
using namespace std;



string LowUpp(string s){               
    int left = 0;
    int right = s.length() - 1;

    for(int i = left; i <= right; i++){     
        if(s[i] >= 'a' && s[i] <= 'z'){    
            s[i] = s[i] - 32;
        }
       
    }
    return s;                          
}

int main() {
    string s;                           
    getline(cin, s);                    
    cout << LowUpp(s) << endl;          
    return 0;
}
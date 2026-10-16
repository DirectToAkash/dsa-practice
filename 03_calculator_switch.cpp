/*
  #03  Simple calculator

  Take two numbers and an operator (+ - * /). Use a switch statement to print the result.
  Handle: division by zero, and an invalid operator.

  Test cases (all must pass before you push):
    10 5 +  ->  15
    10 5 /  ->  2
    10 0 /  ->  Error: division by zero
    10 5 ?  ->  Invalid operator
*/

#include <iostream>
using namespace std;

int main() {
  int a,b;
  char oper;
  cin>>a;
  cin>>b;
  cin>>oper;
    switch(oper){
      case '+':
        cout<<a+b<<endl;
      break;
      case '-':
        cout<<a-b<<endl;
      break;
      case '*':
        cout<<a*b<<endl;
      break;
      case '/':
        if(b==0){
          cout<<"Error: division by zero"<<endl;
        }
        else cout<<a/b<<endl;
      break;

      default:
        cout<<"Invalid operator"<<endl;
    }



    return 0;
}

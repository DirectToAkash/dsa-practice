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
        cout<<a+b;
      break;
      case '-':
        cout<<a-b;
      break;
      case '*':
        cout<<a*b;
      break;
      case '/':
        if(b==0){
          cout<<"Error : can not divide by 0";
        }
        else cout<<a/b;
      break;

      default:
        cout<<"No matchig operator";
    }



    return 0;
}

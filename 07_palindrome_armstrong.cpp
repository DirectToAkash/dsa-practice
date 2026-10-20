/*
  #07  Palindrome number + Armstrong number

  Part A: check if a number reads the same reversed (reuse your #5 logic!).
  Part B: check if it is an Armstrong number: sum of each digit raised to the number of digits equals the number.

  Also submit on LeetCode: Palindrome Number #9

  Test cases (all must pass before you push):
    121  ->  Palindrome
    123  ->  Not palindrome
    153  ->  Armstrong (1^3+5^3+3^3)
    9474  ->  Armstrong (4 digits, power 4)
    100  ->  Not Armstrong
*/

#include <iostream>
#include <cmath>
using namespace std;


void palindrome(int num){
  int main = num;
  int temp;
  int rev = 0;

  while(num!=0){
    temp = num%10;
    rev = rev*10 + temp;
    num = num/10;
  }
  if(main==rev){
    cout<<"Palindrome"<<endl;
  }
  else {cout<<"Not Palindrome"<<endl;
  }
}

void armstrong(int num){
  int main = num;
  int temp;
  int temp2 = num;
  int arm = 0;
  int i = 0;

  while(temp2!=0){
    temp2 = temp2/10;
    i++;
  }

  while(num!=0){
    temp = num%10;
    arm = arm + pow(temp, i);  
    num = num/10;
  }

  if(main == arm){
    cout<<"Armstrong"<<endl;
  }
  else{cout<<"Not Armstrong"<<endl;}


}

int main() {
  int num;
    cin>>num;
    palindrome(num);
    armstrong(num);

    return 0;
}

/*
  #04  Leap year

  Read a year and print whether it is a leap year.
  Rule: divisible by 4, EXCEPT years divisible by 100, UNLESS also divisible by 400.

  Test cases (all must pass before you push):
    2024  ->  Leap
    2023  ->  Not leap
    1900  ->  Not leap
    2000  ->  Leap
*/

#include <iostream>
using namespace std;

int main() {
  int year;
    cout<<"Enter Year"<<endl;
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0){
      cout<<"Leap Year"<<endl;
    }
    else {
      cout<< "not a leap year"<<endl;
    }


    return 0;
}

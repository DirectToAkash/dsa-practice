// #5: Sum of digits and reverse of a number
// Test cases:
// 1234 -> sum 10, reverse 4321
// 1200 -> sum 3, reverse 21
// 0    -> sum 0, reverse 0
// 7    -> sum 7, reverse 7
// -123 -> sum -6, reverse -321
#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    int newNum =0;
    int temp;
    cin>>num;


    while(num!=0){
        temp = num%10;
        sum = sum+temp;
         newNum = newNum*10 + temp;
        num=num/10;

    
    }
    cout<<sum<<endl;
    cout<<newNum;
    
    
}
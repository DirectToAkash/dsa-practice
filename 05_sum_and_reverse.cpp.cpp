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
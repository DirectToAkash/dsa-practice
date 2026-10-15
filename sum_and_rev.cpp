#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    int newNum =0;
    int temp;
    cin>>num;
    int i=0;


    while(num!=0){
        temp = num%10;
        sum = sum+temp;
         newNum = newNum*10 + temp;
            i++;
        num=num/10;

    
}
    cout<<sum<<endl;
    cout<<newNum;
    
    
}
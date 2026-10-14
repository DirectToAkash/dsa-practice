#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a>=b && a>=c){
        cout<<"A is largest";
    }
    else if(b>=a && b>=c){
        cout<<"B is largest";
    }
    else if(c>=b && c>=a){
        cout<<"C is largest";
    }
}
#include<iostream>
using namespace std;

int main(){
    int number1=145;
    int number2=200;
    cout<<number1<<" "<<number2<<endl;
    int temp = number1;
    number1=number2;
    number2=temp;
    cout<<number1<<" "<<number2<<" "<<endl;
    return 0;
}
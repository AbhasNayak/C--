#include<iostream>
using namespace std;

int main(){

    char a;
    cin>>a;

    if(a>='a' && a<='z'){
        cout<<"This is a lower case"<<endl;

    }
    if(a>='A' && a<='Z'){
        cout<<"This is a upper case"<<endl;
    }

    if(a>='1' && a<='9'){
        cout<<"this is a number";
    }
    return 0;
}

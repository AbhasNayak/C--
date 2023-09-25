#include<iostream>
using namespace std;

int main(){  
    

    int i=2;
    int sum=0;
    int n;
    cin>>n;
    while(i<=n){
        if(i%2==0)
        sum=sum+i;
        i=i+2;
    }
    cout<<"value of sum is "<<sum<<endl;
    return 0;
     
}
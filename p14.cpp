#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        sum+=i;
        cout<<"The sum is:"<<sum;
    return 0;    
}
#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    bool isprime=true;

    if(n<2){
        isprime=false;
        }   
    
    for(i=2;i<=n/2;i++){
            if(n%i==0){
                isprime=false;
            }
        }
      
    if(isprime)
        cout<<"prime number";
    else
        cout<<"not prime";    
}





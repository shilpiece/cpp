#include<iostream>
using namespace std;

int main(){

int n;
//cout<<"input is :"<<endl;
cin>>n;

int i=2;

while(i < n){

    if(n % i == 0){

        cout<<"The value is notprime "<< endl;
    }

    else{

    cout<<"The value is prime"<< endl;
    }

    i=i+1;
    
}
}



#include<iostream>
using namespace std;

int main(){
    int a[10];
    int *p=&a[0];
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;//pointer ke liye alg se storage hai 4 byte
    cout<<&a[0]<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;
    p=p+1;
    // a=a+1;// not applicabile in the case of array
    p=a+1;
    cout<<a<<endl;
    cout<<p<<endl;


    a[0]=4;
    a[1]=5;
 
    // cout<<*a<<endl; //0th element
    // int *p =a+1;
    // cout<<a+1<<endl;
    // cout<<*(a+1)<<endl;//i[a]==*(i+a)
    // cout<< p <<endl;

    // int *p=a;
    


}
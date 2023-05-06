#include<iostream>
using namespace std;
int fact(int n){
    cout<<n<<endl;
    if (n==0)
    {
        return 1;
    }
    
    int smallOutput=fact(n-1);
    return n*smallOutput;
}

int main(){
    int n;
    cin>>n;
    int output=fact(n);
    cout<<"Factorial is :"<<output<<endl;
}
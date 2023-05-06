#include <iostream>
using namespace std;
// void increment(int n)//value will, noty be change
void increment(int& i)
{
    i++;
}
//bad prectice
int& f(int n){
    int a = n;
    return a;
}
//bad prectice
int * f2(){
    int i=20;
    return &i;
}
int main()
{
    int * p=f2();
    int i;
    i = 10;
    int &k =f(i);
    increment(i);
    cout << i << endl;

    // int &j1=i;

    // // int&j1;  //it is not applicable
    // // j1=i;

    // i++;
    // cout<<j1<<endl;

    // cout<<j1<<endl;
    // j1++;
    // cout<<i<<endl;

    // int k=100;
    // j1=k;
    // cout<<i<<endl;

    // int *p=&i;
    // cout<<*p<<endl;

    // (*p)++;
    // cout<<*p<<endl;
}
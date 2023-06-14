#include<iostream>
using namespace std;

int main(){
    int i=10;
    int *p = &i;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;//point to 4 byte next means next intger
    p=p-2;
    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl;

    double d=102.3; //this is double
    double *dp=&d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;
}

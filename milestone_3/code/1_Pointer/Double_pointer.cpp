#include <iostream>
using namespace std;

void increment1(int **p)
{
    p = p + 1;
}
void increment2(int **p)
{
    *p = *p + 1;
    cout << **p << endl;
}
void increment3(int **p)// This is function
{
    **p = **p + 1;
}
int main()
{
    int i = 10;
    int *p1 = &i;

   

    // int **p2=&p1;
    // cout<<&p1<<endl;
    // cout<<p2<<endl;

    // cout<<p1<<endl;
    // cout<<*p2<<endl;
    // cout<<&i<<endl;

    // cout<<i<<endl;
    // cout<<*p1<<endl;
    // cout<<**p2<<endl;//i==*p1==**p2
    // increment1(&p1);
    // increment2(&p1);
    // increment3(&p1);
}
// question

// int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;


//  int a = 100;
//     int *p = &a;
//     int **q = &p;
//     int b = (**q)++ + 2;
//     cout << a << " " << b << endl;


// int a = 100;
//   int *p = &a;
//   int **q = &p;
//   int b = (**q)++;
//   int *r = *q;
//   (*r)++;
//   cout << a << " " << b << endl;

// void increment(int **p){
//   (**p)++;
// }

// int main(){
//  int num = 10;
//  int *ptr = &num;
//  increment(&ptr);
//  cout << num << endl;
// }
// #include<iostream>
//     using namespace std;
//     void print(int*p){
//         cout<<*p<<endl;
//     }
//     void incrementPointer(int *p){
//         p=p+1;
//     }
//     void increment(int *p){
//         (*p)++;
//     }
//     int main(){
//         int i=10;
//         int *p=&i;
//         print(p);

//         cout<<p<<endl;
//         incrementPointer(p);
//         cout<<p<<endl;

//         cout<<*p<<endl;
//         increment(p);
//         cout<<*p<<endl;
//     }

// #include<iostream>
// using namespace std;
// // int sum(int *a,int size)
// int sum(int a[],int size){ //a[] pass as a pointer so a[]==*a
//     cout<<sizeof(a)<<endl;
//     int ans=0;
//     for (int i = 0; i < size; i++)
//     {
//         ans+=a[i];
//     }
//     return ans;
// }

// int main(){
//     int a[10];
//     cout<<sizeof(a)<<endl;
//     cout<<sum(a,10)<<endl;
//     cout<<sum(a+3,10)<<endl;//can also part of an array
// }

// questions
// #include <iostream>
// using namespace std;
// void changeSign(int *p)
// {
//     *p = (*p) * -1;
// }

// int main()
// {
//     int a = 10;
//     changeSign(&a);
//     cout << a << endl;
// }

// #include<iostream>
// using namespace std;
// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }


// What will be the output ?
// #include<iostream>
// using namespace std;
// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     int smallOutput=factorial(n-1);
//     int output=n*smallOutput;
//     return output;

// }

// int main(){
//     cout<<factorial(5)<<endl;
// }

// Questions

// // it will show runtime error
// #include <iostream>
// using namespace std;

// int func(int num){
//     return func(num- 1);
// }

// int main() {
//     int num = 5;
//     int ans = func(num - 1);
//     cout << ans;
// }

// #include <iostream>
// using namespace std;

// void print(int n){
//     if(n < 0){
//         return;
//     }
//     cout << n << " ";
//     print(n - 2);
// }

// int main() {
//     int num = 5;
//     print(num);
// }

// #include <iostream>
// using namespace std;

// void print(int n){
//     if(n < 0){
//         return;
//     }
//     if(n == 0){
//         cout << n << " ";
//         return;
//     }
//     print(n --);
//     cout << n << " ";
// }

// int main() {
//     int num = 3;
//     print(num);
// }

// Questions
// Power
// Send Feedback
// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
// Do this recursively.
// Input format :
// Two integers x and n (separated by space)
// Output Format :
// x^n (i.e. x raise to the power n)
// Constraints :
// 0 <= x <= 30
// 0 <= n <= 30
// Sample Input 1 :
//  3 4
// Sample Output 1 :
// 81
// Sample Input 2 :
//  2 5
// Sample Output 2 :
// 32
// #include<iostream>
// #include<cmath>
// using namespace std;
// int power(int x,int n){
//     if (n==0){
//         return 1;
//     }
//     return x*pow(x,n-1);

// }

// int main(){
//     int x,n;
//     cin>>x>>n;
//     cout<<power(x,n)<<endl;;
// }

// Print Numbers
// Send Feedback
// Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
// Input Format :
// Integer n
// Output Format :
// Numbers from 1 to n (separated by space)
// Constraints :
// 1 <= n <= 10000
// Sample Input 1 :
//  6
// Sample Output 1 :
// 1 2 3 4 5 6
// Sample Input 2 :
//  4
// Sample Output 2 :
// 1 2 3 4

// #include<iostream>
// using namespace std;
// // #include "Solution.h"
// void print(int n){
//     //write your code here
//     if(n<1){
//         return;
//     }
//         print(n-1);
//         cout<<n<<" ";

// }

// int main(){
//     int n;
//     cin >> n;

//     print(n);
// }

// Number of Digits
// Send Feedback
// Given the number 'n', find out and return the number of digits present in a number .
// Input Format :
// Integer n
// Output Format :
// Count of digits
// Constraints :
// 1 <= n <= 10^6
// Sample Input 1 :
//  156
// Sample Output 1 :
// 3
// Sample Input 2 :
//  7
// Sample Output 2 :
// 1
#include<iostream>
// #include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}



int count(int n)
{
    if (n / 10 == 0)
        return 1;
    int ans = count(n / 10);
    return 1 + ans;
}

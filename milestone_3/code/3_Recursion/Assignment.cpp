// Multiplication (Recursive)
// Send Feedback
// Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
// Input format :
// Line 1 : Integer M
// Line 2 : Integer N
// Output format :
// M x N
// Constraints :
// 0 <= M <= 1000
// 0 <= N <= 1000
// Sample Input 1 :
// 3
// 5
// Sample Output 1 :
// 15
// Sample Input 2 :
// 4
// 0
// Sample Output 2 :
// 0

// #include <iostream>
// // #include "solution.h"
// using namespace std;

// int multiplyNumbers(int m, int n) {
//     // Write your code here
// if(n==0||m==0){
//     return 0;
// }
//  int ans=m+multiplyNumbers(m,n-1);
// }

// int main() {
//     int m, n;
//     cin >> m >> n;
//     cout << multiplyNumbers(m, n) << endl;
// }

// Count Zeros
// Send Feedback
// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
// Input Format :
// Integer N
// Output Format :
// Number of zeros in N
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 0
// Sample Output 1 :
// 1
// Sample Input 2 :
// 00010204
// Sample Output 2 :
// 2
// Explanation for Sample Output 2 :
// Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.
// Sample Input 3 :
// 708000
// Sample Output 3 :
// 4

// #include <iostream>
// // #include "solution.h"
// using namespace std;

// int countZeros(int n) {
//     // Write your code here
// if(n==0){
//     return 1;
// }
//     if(n<10){
//         return 0;
//     }
//     int rem=n%10;
//     if(rem==0){
//         return 1+countZeros(n/10);
//     }
//        else{
//            return countZeros(n/10);
//        }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << countZeros(n) << endl;
// }

// Geometric Sum
// Send Feedback
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
// using recursion.
// Input format :
// Integer k
// Output format :
// Geometric sum (upto 5 decimal places)
// Constraints :
// 0 <= k <= 1000
// Sample Input 1 :
// 3
// Sample Output 1 :
// 1.87500
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1.93750
// Explanation for Sample Input 1:
// 1+ 1/(2^1) + 1/(2^2) + 1/(2^3) = 1.87500

// #include <iostream>
// #include <math.h>
// #include <iomanip>
// // #include "solution.h"
// using namespace std;

// double geometricSum(int k)
// {
//     // Write your code here
//     if (k == 0)
//     {
//         return 1;
//     }
//     double smalloutput = geometricSum(k - 1);
//     return smalloutput + 1 / (pow(2, k));
// }

// int main()
// {
//     int k;
//     cin >> k;
//     cout << fixed << setprecision(5);
//     cout << geometricSum(k) << endl;
// }

// Check Palindrome (recursive)
// Send Feedback
// Check whether a given String S is a palindrome using recursion. Return true or false.
// Input Format :
// String S
// Output Format :
// 'true' or 'false'
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// racecar
// Sample Output 1:
// true
// Sample Input 2 :
// ninja
// Sample Output 2:
// false

// #include <iostream>
// // #include "solution.h"
// using namespace std;

// #include<cstring>

// bool f(char input[],int start,int end){
//     if(start>=end)
//     return true;

//     if(input[start]!=input[end])
//     return false;

//     bool ans=f(input,start+1,end-1);
//     return ans;
// }

// bool checkPalindrome(char input[]) {
//     // Write your code here
//    int len = strlen(input);
//     int start=0,end=len-1;
//    bool a= f(input,start,end);
//     return a;
// }

// int main() {
//     char input[50];
//     cin >> input;

//     if(checkPalindrome(input)) {
//         cout << "true" << endl;
//     }
//     else {
//         cout << "false" << endl;
//     }
// }

// Sum of digits (recursive)
// Send Feedback
// Write a recursive function that returns the sum of the digits of a given integer.
// Input format :
// Integer N
// Output format :
// Sum of digits of N
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 12345
// Sample Output 1 :
// 15
// Sample Input 2 :
// 9
// Sample Output 2 :
// 9

// #include <iostream>
// // #include "solution.h"
// using namespace std;
// int sumOfDigits(int n) {
//     // Write your code here
// if(n==0){
//     return 0;
// }
//     return  (n % 10 + sumOfDigits(n / 10));
// }

// int main() {
//    int n;
//    cin >> n;
//    cout << sumOfDigits(n) << endl;
// }

// 1
// Replace pi (recursive)
// Send Feedback
// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
// Constraints :
// 1 <= |S| <= 50
// where |S| represents the length of string S.
// Sample Input 1 :
// xpix
// Sample Output :
// x3.14x
// Sample Input 2 :
// pipi
// Sample Output :
// 3.143.14
// Sample Input 3 :
// pip
// Sample Output :
// 3.14p
// Constraints:-
// 1<=|S|<=50

// #include <iostream>
// // #include "solution.h"
// using namespace std;
// #include <bits/stdc++.h>

// void replacePi(char input[]) {
// 	// Write your code here
//     if(input[0]=='\0')
//         return;
//     if(input[0]=='p' && input[1]=='i'){
//         input[0]='3';
//         input[1]='.';

//         int size=strlen(input);
//         for(int i=size+2;i>1;i--){
//             input[i]=input[i-2];
//         }
//         input[2]='1';
//         input[3]='4';
//     }

//     replacePi(input+1);

// }

// int main() {
//     char input[10000];
//     cin.getline(input, 10000);
//     replacePi(input);
//     cout << input << endl;
// }

// 2
// Remove X
// Send Feedback
// Given a string, compute recursively a new string where all 'x' chars have been removed.
// Input format :
// String S
// Output format :
// Modified String
// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string S.
// Sample Input 1 :
// xaxb
// Sample Output 1:
// ab
// Sample Input 2 :
// abc
// Sample Output 2:
// abc
// Sample Input 3 :
// xx
// Sample Output 3:

// #include <iostream>
// // #include "solution.h"
// using namespace std;

// #include <bits/stdc++.h>

// void help(char input[], int size, int a)
// {
//     if (input[a] == '\0')
//         return;
//     if (input[a] == 'x')
//     {
//         for (int i = a; i < size; i++)
//         {
//             input[i] = input[i + 1];
//         }
//         size = size - 1;
//     }
//     else
//         a++;

//     help(input, size, a);
// }

// void removeX(char input[])
// {

//     int size = strlen(input);
//     int count = 0;
//     help(input, size, count);
// }

// int main()
// {
//     char input[100];
//     cin.getline(input, 100);
//     removeX(input);
//     cout << input << endl;
// }

// Pair Star
// Send Feedback
// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
// Input format :
// String S
// Output format :
// Modified string
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// hello
// Sample Output 1:
// hel*lo
// Sample Input 2 :
// aaaa
// Sample Output 2 :
// a*a*a*a

#include <iostream>
// #include "solution.h"
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.
#include <string.h>
void pairStar(char input[])
{
    int n = strlen(input);
    // Write your code here
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {
        int i = n;
        for (i; 1 <= i; i--)
        {
            input[i + 1] = input[i];
        }

        input[1] = '*';
    }
    pairStar(input + 1);
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}

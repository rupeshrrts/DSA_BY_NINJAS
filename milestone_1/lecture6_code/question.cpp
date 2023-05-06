// #include <iostream>
// using namespace std;
// int main()
// {
//          int x, y = 1;
//          x = 10;
//          if (x != 10 && x / 0 == 0)
//             cout << y;
//          else
//              cout << ++y;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 15;
//     int y = x++;
//     int z = ++x;
//     cout << y << " " << z;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//          int g = 3;
//          cout << (++g * 8);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int y = 20;
//     if(x++ > 10 && ++y > 20 ){
//     cout << "Inside if ";
//     } else{
//     cout << "Inside else ";
//     }
//     cout << x << " " << y;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int y = 20;
//     if(x++ > 10 || ++y > 20 ){
//     cout << "Inside if ";
//     } else{
//     cout << "Inside else ";
//     }
//     cout << x << " " << y;
// }

// What will be the output the following code ?
// for(int i = 0; i < 5; i = i + 1){
//     cout << i << " ";
//     i = i + 1;
// }

// What will be the output the following code?
// for(int i = 1; i < 5; i = i + 1){
//     cout << i << " ";
//     i = i - 1;
// }

// What will be the output ?
// for(int i = 0; i < 2; i = i + 1) {
//      for(int j = 0; j < 2; j = j + 1) {
//           if (j == 1)
//               break;
//           cout << j << " ";
//       }
//  }

// What will be the output ?
// for(int i = 0; i < 5; i = i + 1) {
//      if(i == 2)
//            continue;
//     cout << i << " ";
//  }

// Nth Fibonacci Number
// Send Feedback
// Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//     F(n) = F(n-1) + F(n-2),
//     Where, F(1) =  1,
//            F(2) = 1
// Provided N you have to find out the Nth Fibonacci Number.
// Input Format :
// The first line of each test case contains a real number ‘N’.
// Output Format :
// For each test case, return its equivalent Fibonacci number.
// Constraints:
// 1 <= N <= 10000
// Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

// Time Limit: 1 second
// Sample Input 1:
// 6
// Sample Output 1:
// 8
// Explanation of Sample Input 1:
// Now the number is ‘6’ so we have to find the “6th” Fibonacci number
// So by using the property of the Fibonacci series i.e

// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.
// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;

//   int a = 0;
//   int b = 1;
//   int nextSum;
//   for (int i = 0; i < n; i++) {
//     nextSum = a + b;
//     a = b;
//     b = nextSum;
//     cout <<a<<endl;

//   }
//   cout << a;
// }

// int i = 1;
// while(i < 5) {
//     if(i == 3) {
//         break;
//     }
//     cout << i << " ";
//     i++;
// }

// int i = 1;
// while(i < 5) {
//     if(i == 3) {
//         continue;
//     }
//     cout << i << " ";
//     i++;
// }

// int i = 1;
// while(i < 3) {
//     int j = 1;
//     while(j < 5) {
//         if(j == 3) {
//             break;
//         }
//         cout << j << " ";
//         j++;
//     }
//     i++;
// }

// int i = 1;
// while(i < 3) {
//     int j = 0;
//     while(j < 5) {
//         j++;
//         if(j == 3) {
//             continue;
//         }
//         cout << j << " ";
//     }
//     i++;
// }

// All Prime Numbers
// Send Feedback
// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
// Print the prime numbers in different lines.
// Input Format :
// Integer N
// Output Format :
// Prime numbers in different lines
// Constraints :
// 1 <= N <= 100
// Sample Input 1:
// 9
// Sample Output 1:
// 2
// 3
// 5
// 7
// Sample Input 2:
// 20
// Sample Output 2:
// 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 2;
//     while (i <= n)
//     {
//         int j=2;
//         bool div = false;
//         while (j < i)
//         {
//             if (i % j == 0)
//             {
//                 div = true;
//                 break;
//             }
//             j++;
//         }
//         if (div == false)
//         {
//             cout << i << endl;
//         }
//         i++;
//     }
// }

// Will following code generate error ?
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     if(a > 5) {
//         int b = 10;
//     }
//     cout << b << endl;
// }

// Will following code generate error ?
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     if(a > 5) {
//         int a = 100;
//     }
//     cout << a << endl;
// }

#include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     if(a > 5) {
//         int a = 100;
//     }
//     else {
//         int a = 110;
//     }
//     cout << a << endl;
// }

// Will following code generate error ?
// #include <iostream>
// using namespace std;
// int main() {
//     for(int i = 0; i < 3; i++) {
//         cout << i << " ";
//     }
//     cout << i << " ";
// }

// What is the output ?
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     while(a > 5) {
//         int a = 1;
//         cout << a << " ";
//         a--;
//     }
// }

// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).
// Input Format :
// A stream of characters terminated by '$'
// Output Format :
// 3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
// Sample Input :
// abc def4 5$
// Sample Output :
// 6 2 2
// Sample Output Explanation :
// Number of characters : 6 (a, b, c, d, e, f)
// Number of digits : 2 (4, 5)
// Number of white spaces : 2 (one space after abc and one newline after 4)

// Sum or Product
// Send Feedback
// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)
// Input format :
// Line 1 : Integer N
// Line 2 : Choice C
// Output Format :
//  Sum or product according to user's choice
// Constraints :
// 1 <= N <= 12
// Sample Input 1 :
// 10
// 1
// Sample Output 1 :
// 55
// Sample Input 2 :
// 10
// 2
// Sample Output 2 :
// 3628800
// Sample Input 3 :
// 10
// 4
// Sample Output 3 :
// -1

// #include <iostream>
// using namespace std;

// int main() {
//   // Write your code here
//   int n;
//   cin >> n;
//   int c;
//   cin >> c;
//   int sum = 0;
//   int prod = 1;
//   int i = 1;
//   if (c == 1) {

//     while (i <= n) {
//       sum += i;

//       i += 1;
//     }
//     cout << sum;
//   } else if (c == 2) {
//     while (i <= n) {
//       prod *= i;
//       i += 1;
//     }
//     cout << prod;
//   } else {
//     cout << "-1";
//   }
// }

// Terms of AP
// Send Feedback
// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
// Input format :
// Integer x
// Output format :
// Terms of series (separated by space)
// Constraints :
// 1 <= x <= 1,000
// Sample Input 1 :
// 10
// Sample Output 1 :
// 5 11 14 17 23 26 29 35 38 41
// Sample Input 2 :
// 4
// Sample Output 2 :
// 5 11 14 17

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
// 	// Write your code here
//    int x;
//     cin>>x;

//     for(int i=1;i<=x;i++){
//        int ans=3*i+2;
//         if(ans%4==0){
//             x+=1;
//             continue;

//         }
//             cout<<ans<<" ";

//     }

// }

// Reverse of a number
// Send Feedback
// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

// Input format :
// Integer N
// Output format :
// Corresponding reverse number
// Constraints:
// 0 <= N < 10^8
// Sample Input 1 :
// 1234
// Sample Output 1 :
// 4321
// Sample Input 2 :
// 1980
// Sample Output 2 :
// 891

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   int rem;
//   int rev = 0;
//   int i = 0;
//   while (n != 0) {
//     rem = n % 10;
//     rev = rev * 10 + rem;
//     i++;
//     n = n / 10;
//   }
//   cout << rev;
// }

// Binary to decimal
// Send Feedback
// Given a binary number as an integer N, convert it into decimal and print.
// Input format :
// An integer N in the Binary Format
// Output format :
// Corresponding Decimal number (as integer)
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 1100
// Sample Output 1 :
// 12
// Sample Input 2 :
// 111
// Sample Output 2 :
// 7

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
// 	// Write your code here
//     int n;
//     cin>>n;
//     int i=0;
//     int ans=0;
//     while(n!=0){
//         int digit=n%10;
//         ans=digit*pow(2,i)+ans;
//         n/=10;
//         i++;
//     }
//     cout<<ans;
// }

// Decimal to Binary
// Send Feedback
// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.
// Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.

// Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.

// Input format :
// Integer N
// Output format :
// Corresponding Binary number (long)
// Constraints :
// 0 <= N <= 10^5
// Sample Input 1 :
// 12
// Sample Output 1 :
// 1100
// Sample Input 2 :
// 7
// Sample Output 2 :
// 111

// #include<iostream>
// using namespace std;

// int main() {
//     long n;
//     cin>>n;
//     long pv=1;
//     long ans=0;
//     while(n){
//         int rem=n%2;
//         n=n/2;
//         ans=ans+pv*rem;
//         pv=pv*10;
//     }
//     cout<<ans;

// }

// Square Root (Integral)
// Send Feedback
// Given a number N, find its square root. You need to find and print only the integral part of square root of N.
// For eg. if number given is 18, answer is 4.
// Input format :
// Integer N
// Output Format :
// Square root of N (integer part only)
// Constraints :
// 0 <= N <= 10^8
// Sample Input 1 :
// 10
// Sample Output 1 :
// 3
// Sample Input 2 :
// 4
// Sample Output 2 :
// 2

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
// 	// Write your code here
//     int n;
//     cin>>n;
//     int ans=sqrt(n);
//     cout<<ans<<endl;

// }

// Check Number sequence
// Send Feedback
// You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
// Note : We say that x is strictly larger than y when x > y.
// So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.

// That is, in the sequence if numbers are decreasing, they can start increasing at one point. Thereafter, they cannot decrease at any point further.
// Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So, in both the cases, print true.

// You just need to print true/false. No need to split the sequence.
// Input format :
// Line 1 : Integer 'n'
// Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)
// Output Format :
// "true" or "false" (without quotes)
// Constraints :
// 1 <= n <= 10^7
// Sample Input 1 :
// 5
// 9
// 8
// 4
// 5
// 6
// Sample Output 1 :
// true
// Sample Input 2 :
// 3
// 1
// 2
// 3
// Sample Output 2 :
// true
// Sample Input 3 :
// 3
// 8
// 7
// 7
// Sample Output 3 :
// false
// Explanation for Sample Format 3 :
// 8 7 7 is not strictly decreasing, so output is false.
// Sample Input 4 :
// 6
// 8
// 7
// 6
// 5
// 8
// 2
// Sample Output 4 :
// false
// Explanation for Sample Input 4 :
// The series is :
// 8 7 6 5 8 2
// It is strictly decreasing first (8 7 6 5). Then it's strictly increasing (5 8). But then it starts strictly decreasing again (8 2). Therefore, the output for this test case is 'false'

// #include<iostream>
// using namespace std;

// int main() {
// 	// Write your code here
//       int n;
//     cin>>n;
//     int prev ;
//     cin>>prev;
//     int count = 2, current;
//     bool isDec = true;

//     while(count <= n){
//         cin >> current;
//         if(current == prev){
//             cout << "false";
//             return 0;

//         }
//         count++;
//         if(current < prev){
//             if(isDec == false){
//                 cout<<"false";
//                 return 0;
//             }
//         }
//         else{
//             if(isDec == true){
//                 isDec = false;
//             }
//         }
//         prev = current;
//     }
//     cout<<"true";
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int p = 100;
//     if (p > 20)
//     {
//         if (p < 20)
//         {
//             cout << "coding";
//         }
//     }
//     else
//     {
//         cout << "ninjas";
//     }
// }


// Write the correct order(s) of statements.
// We want to print "Coding Ninjas" 10 times.
// 1.  while(x <= 10) {
// 2.  int x = 1;
// 3.  x += 1;
// 4.  cout<<"Coding Ninjas"<<endl;
// 5.  }

// Figure out the output
// int x = 10;
// while(x >= 0) {
//     x = x - 1;
//     cout<<x;
//     x--;
// }

// Pyramid Number Pattern
// Send Feedback
// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// Input format : N (Total no. of rows)

// Output format : Pattern in N lines

// Sample Input :
// 5
// Sample Output :
//         1
//       212
//     32123
//   4321234
// 543212345



// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int space = 1;
//     while (space <= n - i) {
//       cout << " ";
//       space = space + 1;
//     }
//     int j = 1;
//     int val = i;
//     while (j <= i) {
//       cout << val;
//       val = val - 1;

//       j = j + 1;
//     }
//     j = i - 1;
//     int val1 = 2;
//     while (j >= 1) {
//       cout << val1;
//       val1 = val1 + 1;

//       j = j - 1;
//     }
//     cout << endl;
//     i = i + 1;
//   }
// }


// Number Star Pattern
// Send Feedback
// Print the following pattern for given number of rows.
// Input format :

// Line 1 : N (Total number of rows)

// Sample Input :
//    5
// Sample Output :
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1



// #include<iostream>
// using namespace std;


// int main(){

//   // Write your code here
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int count=n-i+1;
//         int j=1;
//         while(j<=n-i+1){
//             cout<<j;
//             j++;
//         }
//         int star=1;
//         while(star<=i-1){
//             cout<<"*";
//             star++;
//         }
//         int stars=1;
//         while(stars<=i-1){
//             cout<<"*";
//             stars++;
//         }
//         int k=1;
//         while(k<=n-i+1){
//             cout<<count;
//             count--;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }

// }


// Second Largest
// Send Feedback
// Take input a stream of n integer elements, find the second largest element present.
// The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
// Input format :

// Line 1 : Total number of elements (n)

// Line 2 : N elements (separated by space)

// Sample Input 1:
//  4
//  3 9 0 9
// Sample Output 1:
//  3
// Sample Input 2 :
//  2
//  4 4
// Sample Output 2:
//  -2147483648
// Sample Output Explanation:
// Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )


// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
    
//     // Write your code here
//     int n;
//     cin>>n;
//     int input[n];
//     int i,j;
//     int secmax=INT_MIN,max=INT_MIN;
//     for(j=1;j<=n;j++){
//         cin>>input[j];
//     }
//     int max=INT_MIN;
//     for( i=1;i<=n;i++){
        
//         if(input[j]>max){
//             secmax=max;
//             max=input[j];
            
//         }
//         cout<<secmax;
//     }

    
// }



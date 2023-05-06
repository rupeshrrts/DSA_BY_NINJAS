
// // Sum of Even Numbers till N
// // Send Feedback
// // Given a number N, print sum of all even numbers from 1 to N.
// // Input Format :
// // Integer N
// // Output Format :
// // Required Sum
// // Sample Input 1 :
// //  6
// // Sample Output 1 :
// // 12

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int num=0;
//     int sum =0;
//     while (num<=n)
//     {
//         if (num%2==0)
//         {
//             sum +=num;
//         }
//         num=num+1;
//     }
//     cout<<sum;
// }

// Fahrenheit to Celsius Table
// Send Feedback
// Given three values - Start Fahrenheit Value (S),
// End Fahrenheit value (E) and Step Size (W), you need to convert
// all Fahrenheit values from Start to End at the gap of W, into
// their corresponding Celsius values and print the table.
// Input Format :
// 3 integers - S, E and W respectively
// Output Format :
// Fahrenheit to Celsius conversion table. One line for every
// Fahrenheit and corresponding Celsius value in integer form.
// The Fahrenheit value and its corresponding Celsius value should
// be separate by single space.
// Constraints :
// 0 <= S <= 90
// S <= E <=  900
// 0 <= W <= 80
// Sample Input 1:
// 0
// 100
// 20
// Sample Output 1:
// 0   -17
// 20  -6
// 40  4
// 60  15
// 80  26
// 100 37
// Sample Input 2:
// 20
// 119
// 13
// Sample Output 2:
// 20  -6
// 33  0
// 46  7
// 59  15
// 72  22
// 85  29
// 98  36
// 111 43
// Explanation For Input 2:
// Start calculating the Celsius values for each Fahrenheit Value
// which starts from 20. So starting from 20, we need to compute its
//  corresponding Celsius value which computes to -6. We print this
//  information as <Fahrenheit Value> <a single space> <Celsius Value>
// on each line. Now add 13 to Fahrenheit Value at each step
// until you reach 119 in this case. You may or may not exactly land on
//  the end value depending on the steps you are taking.

// #include<iostream>
// using namespace std;

// int main(){
//     int s,e,w;
//     cin>>s>>e>>w;
//     while(s<=e)
//     {
//         int ans = 5*(s-32)/9;
//         cout<<s<<" "<<ans<<endl;
//         s=s+w;
//     }
// }

// Number Pattern 1
// Send Feedback
// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567
// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Sample Input 1 :
// 3
// Sample Output 1 :
// 1
// 23
// 345

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;

//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<j+i-1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// or

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int x=i;
//         for(int j=1;j<=i;j++){
//             cout<<x;
//             x++;
//         }
//         cout<<endl;
//     }
// }

// Number Pattern 2
// Send Feedback
// Print the following pattern
// Pattern for N = 4

// The dots represent spaces.

// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Sample Input :
// 5
// Sample Output :
// The dots represent spaces.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the n ";
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int space = 1;
//         while (space <= n - i)
//         {
//             cout << " ";
//             space += 1;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i + j - 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// Start Pattern
// Send Feedback
// Print the following pattern
// Pattern for N = 4

// The dots represent spaces.

// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   ***
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    ***
//   *****
//  *******

// Total Salary
// Send Feedback
// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
// Round off the total salary and then print the integral part only.
// Note: Try finding out a function on the internet to do so
// Input format :
// Basic salary & Grade (separated by space)
// Output Format :
// Total Salary
// Constraints :
// 0 <= Basic Salary <= 7,500,000
// Sample Input 1 :
// 10000 A
// Sample Output 1 :
// 17600
// Sample Input 2 :
// 4567 B
// Sample Output 2 :
// 8762
// Explanation of Input 2:
// We have been given the basic salary as Rs. 4567. We need to calculate the hra, da and pf.
// Now when we calculate each of the, it turns out to be:
// hra =  20% of Rs. 4567 = Rs. 913.4
// da = 50% od Rs. 4567 = Rs. 2283.5
// pf = 11% of Rs. 4567 = Rs. 502.37

// Since, the grade is 'B', we take allowance as Rs. 1500.
// On substituting these values to the formula of totalSalary, we get Rs. 8761.53 and now \
// rounding it off will result in Rs. 8762 and hence the Answer.

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
// 	// Write your code here
//     int basic;
//     char grade;
//     cin>>basic>>grade;
//     int allow;
//     double hra, da, pf;
//     hra=0.2*basic;
//     da=0.5*basic;
//     pf=0.11*basic;
//    if (grade == 'A') {
// 		allow = 1700;
// 	}
// 	else if (grade == 'B') {
// 		allow = 1500;
// 	}
// 	else {
// 		allow = 1300;
// 	}
//      int totalsalary;
//     totalsalary=round(basic+hra+da+allow-pf);
//         cout<<totalsalary;

// }
// Sum of even & odd
// Send Feedback
// Write a program to input an integer N and print the sum of all its even digits
//  and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "13245", even
// digits are 2 & 4 and odd digits are 1, 3 & 5.
// Input format :
//  Integer N
// Output format :
// Sum_of_Even_Digits Sum_of_Odd_Digits
// (Print first even sum and then odd sum separated by space)
// Constraints
// 0 <= N <= 10^8
// Sample Input 1:
// 1234
// Sample Output 1:
// 6 4
// Sample Input 2:
// 552245
// Sample Output 2:
// 8 15
// Explanation for Input 2:
// For the given input, the even digits are 2, 2 and 4 and if we take the sum of these digits it
// will come out to be 8(2 + 2 + 4) and similarly, if we look at the odd digits, they are, 5, 5 and 5
// which makes a sum of 15(5 + 5 + 5). Hence the answer would be, 8(evenSum) <single space> 15(oddSum)


// #include <iostream>
// using namespace std;

// int main() {
//   // Write your code here
//   int num;
//   cout<<"Enter the n ";
//   cin >> num;
//   int digit;
//   int ev = 0;
//   int  odd = 0;
//   while (num > 0) {
//     digit = num % 10;
//     num = num / 10;
//     if (digit % 2 != 0)
//       odd = odd + digit;
//     else
//       ev = ev + digit;
//   }
//   cout << ev << " " << odd << endl;
// }


// Find power of a number
// Send Feedback
// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
// Note : For this question, you can assume that 0 raised to the power of 0 is 1


// Input format :
// Two integers x and n (separated by space)
// Output Format :
// x^n (i.e. x raise to the power n)
// Constraints:
// 0 <= x <= 8 
// 0 <= n <= 9
// Sample Input 1 :
//  3 4
// Sample Output 1 :
// 81
// Sample Input 2 :
//  2 5
// Sample Output 2 :
// 32
// #include<iostream>
// using namespace std;

// int main(){
//     int a=10;
//     cout<<a++<<endl;
//     cout<<++a<<endl;
//     cout<<++a<<endl;
//     cout<<a++;

// }
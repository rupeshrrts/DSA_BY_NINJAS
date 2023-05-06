// What will be the output of following code ?
//     void func(int a, int b){
//     cout << (a + b);
//     }

//     int main() {
//     int a = 7;
//     func(a, 12);
//     }

// What will be the output of the following code ?
// void demo(int a, int b){
//     cout << a << " " << b;
// }

// int main() {
//     int a = 5;
//     int b = 15;
//     demo(a);
// }

// Fahrenheit to Celsius Table
// Send Feedback
// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
// Input Format :
// 3 integers - S, E and W respectively
// Output Format :
// Fahrenheit to Celsius conversion table. One line for every Fahrenheit and Celsius Fahrenheit value. Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
// Constraints :
// 0 <= S <= 1000
// 0 <= E <= 1000
// 0 <= W <= 1000
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
// 120
// 200
// 40
// Sample Output 2:
// 120 48
// 160 71
// 200 93
// Explanation for Sample Output 2 :
// Start value is 120, end value is 200 and step size is 40. Therefore, the values we need to convert are 120, 120 + 40 = 160, and 160 + 40 = 200.
// The formula for converting Fahrenheit to Celsius is:
// Celsius Value = (5/9)*(Fahrenheit Value - 32)
// Plugging 120 into the formula, the celsius value will be (5 / 9)*(120 - 32) => (5 / 9) * 88 => (5 * 88) / 9 => 440 / 9 => 48.88
// But we'll only print 48 because we are only interested in the integral part of the value.

// void printTable(int start, int end, int step) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Print output and don't return it.
//      * Taking input is handled automatically.
//      */
//     int ans=5*(start-32)/9;
//     while(start<=end){
//         ans=5*(start-32)/9;
//         cout<<start<<" "<<ans<<endl;
//         start+=step;

//     }
// }

// Fibonacci Number
// Send Feedback
// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1

// Input Format :
// Integer N
// Output Format :
// true or false
// Constraints :
// 0 <= n <= 10^4
// Sample Input 1 :
// 5
// Sample Output 1 :
// true
// Sample Input 2 :
// 14
// Sample Output 2 :
// false

// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     int d = 2;
//     while (d < n)
//     {
//         if (n % d == 0)
//         {
//             return false;
//         }
//         d++;
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     for (int d = 2; d <= n; d++)
//     {
//         if (isPrime(d))
//         {
//             cout << d << endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// void B()
// {
//     cout<<5<<endl;
// }
// void A(int a )
// {
//     cout<<1<<endl;
//     B();
//     cout<<2<<endl;
// }

// int main(){
//     int n=8;
//     cout<<3<<endl;
//     A(n);
//     cout<<n<<endl;
//     cout<<4<<endl;
// }

// #include <iostream>
// using namespace std;

// int fact(int n) {
// 	//cout << a << endl;
// 	int ans = 1;
// 	for (int i = 1; i <=n ;i++) {
// 		ans = ans * i;
// 	}
// 	return ans;
// }

// int main() {
// 	int a;
// 	cin >> a;
// 	int output = fact(a);
// 	//cout << ans << endl;
// 	//cout << n << endl;
// 	cout << output << endl;
// }


// Will following code generate any error ?
// #include <iostream>
// using namespace std;
// void func(int a) {
//     int b = a;
//     b = b + 10;
// }

// int main() {
//     int a = 10;
//     func(a);
//     cout << b << endl;
// }


// Will following code generate any error ?
// #include <iostream>
// using namespace std;

// void func(int a) {
//     int b = 10;
//     a = b + 10;
//     cout << a << " ";
// }

// int main() {
//     int a = 10;
//     func(a);
//     cout << a << " ";
// }


// #include <iostream>
// using namespace std;

// void increment(int a) {
// 	a = a + 1;
// }

// int main() {
// 	int a = 10;
// 	increment(a);
// 	cout << a << endl;
// }


// What will be the output of the following code ?
// void doubleValue(int a) {
//     a = a * 2;
// }
// int main() {
//     int a = 8;
//     doubleValue(a);
//     cout << a;
// }

// What will be the output of the following code ?
// int func(int a){
//     a += 10;
//     return a;
// }

// int main() {
//     int a = 5;
//     func(a);
//     cout << a;
// }


// What will be the output of the following code ?
// int square(int a){
//     int ans = a * a;
//     return ans;
// }

// int main() {
//     int a = 4;
//     a = square(a);
//     cout << a;
// }


#include<iostream>
using namespace std;

int main(){


}
// Check AB
// Send Feedback
// Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'
// If all the rules are followed by the given string, return true otherwise return false.
// Input format :
// String S
// Output format :
// 'true' or 'false'
// Constraints :
// 1 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// abb
// Sample Output 1 :
// true
// Sample Input 2 :
// abababa
// Sample Output 2 :
// false
// Explanation for Sample Input 2
// In the above example, a is not followed by either "a" or "bb", instead it's followed by "b" which results in false to be returned.


// #include <iostream>
// // #include "solution.h"
// using namespace std;
// bool checkAB(char input[]) {
//     if (input[0] == '\0'){
//         return true;
//     }
    
//     if (input[0] == 'a' && input[1] == 'a'){
//         return checkAB(input + 1);
//     }
//     else if (input[0] == 'a' && input[1] == '\0'){
//         return true;
//     }
//     else if (input[0] == 'a' && input[1] == 'b' && input[2] == 'b'){
//         return checkAB(input + 3);
//     }
// 	return false;

// }


// int main() {
//     char input[100];
//     bool ans;
//     cin >> input;
//     ans=checkAB(input);
//     if(ans)
//         cout<< "true" << endl;
//     else
//         cout<< "false" << endl;
// }


// Staircase
// Send Feedback
// A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
// Input format :
// Integer N
// Output Format :
// Integer W
// Constraints :
// 1 <= N <= 30
// Sample Input 1 :
// 4
// Sample Output 1 :
// 7
// Sample Input 2 :
// 5
// Sample Output 2 :
// 13

// #include <iostream>
// // #include "solution.h"
// using namespace std;
// int staircase(int n)
// {
//     if (n == 1)
//         return 1;
//     if (n == 2)
//         return 2;
//     if (n == 3)
//         return 4;

//     return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
// }
// int main() {
//     int n, output;
//     cin >> n;
//     output=staircase(n);
//     cout<< output <<endl;
// }


// Binary Search (Recursive)
// Send Feedback
// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :

// Line 1 : Array size

// Line 2 : Array elements (separated by space)

// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5 
// Sample Output:
// 3 

// #include <iostream>
// // #include "solution.h"
// using namespace std;
// int binarysearchhelper(int input[], int start, int end, int x)
// {
//     if (start > end)
//         return -1;
//     int mid = (start + end) / 2;

//     if (input[mid] == x)
//         return mid;
//     if (x > input[mid])
//         return binarysearchhelper(input, mid + 1, end, x);
//     if (x < input[mid])
//         return binarysearchhelper(input, start, mid - 1, x);
// }

// // Time: - O(logn) Space: - O(logn)
// int binarySearch(int input[], int size, int element)
// {
//     binarysearchhelper(input, 0, size - 1, element);
// }

// int main() {
//     int input[100000],length,element, ans;
//     cin >> length;
//     for(int i =0;i<length;i++)
//     { 
//         cin >> input[i];;
//     }

//     cin>>element;
//     ans = binarySearch(input, length, element);
//     cout<< ans << endl;
// }


// Return subset of an array
// Send Feedback
// Given an integer array (of length n), find and return all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.


// Note : The order of subsets are not important.


// Input format :

// Line 1 : Size of array

// Line 2 : Array elements (separated by space)

// Sample Input:
// 3
// 15 20 12
// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12 

// #include <iostream>
// // #include "solution.h"
// using namespace std;

// int subset(int input[], int n, int output[][20])
// {
//     if (n == 0)
//     {
//         output[0][0] = {0};
//         return 1;
//     }

//     int c = subset(input, n - 1, output);

//     for (int i = 0; i < c; i++)
//     {
//         int size = output[i][0];
//         for (int j = 0; j <= size; j++)
//         {
//             output[i + c][j] = output[i][j];
//         }
//         output[i + c][size + 1] = input[n - 1];
//         output[i + c][0]++;
//     }
//     return c * 2;
// }
// int main() {
//   int input[20],length, output[35000][20];
//   cin >> length;
//   for(int i=0; i < length; i++)
//     cin >> input[i];
  
//   int size = subset(input, length, output);

//   for( int i = 0; i < size; i++) { 
// 	for( int j = 1; j <= output[i][0]; j++) { 
// 		cout << output[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// Print Subsets of Array
// Send Feedback
// Given an integer array (of length n), find and print all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print the subsets in different lines.
// Input format :
// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)
// Constraints :
// 1 <= n <= 15
// Sample Input:
// 3
// 15 20 12
// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12 

// #include <iostream>
// using namespace std;
// // #include "solution.h"
// //void printSubsetsOfArray(int input[], int size) {
// 	// Write your code he
// void printSubsetsOfArray(int input[],int size, int output[],int outputSize){
//     if(size == 0){
//         for(int i=0;i<outputSize;i++){
//             cout<<output[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
    
//     printSubsetsOfArray(input+1,size-1,output,outputSize);
//     //assuming current elemnet is included in array
//     int newoutput[20] = {};
//     for(int i=0;i<outputSize;i++){
//         newoutput[i] = output[i];
//     }
//     newoutput[outputSize] = input[0];
//     printSubsetsOfArray(input+1,size-1,newoutput,outputSize+1);
// }

// void printSubsetsOfArray(int input[], int size) {
//     int ans[20] = {};
//     printSubsetsOfArray(input,size,ans,0);
// }


// int main() {
//   int input[1000],length;
//   cin >> length;
//   for(int i=0; i < length; i++)
//   	cin >> input[i];
//   printSubsetsOfArray(input, length);
// }


// Return subsets sum to K
// Send Feedback
// Given an array A of size n and an integer K, return all subsets of A which sum to K.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.


// Note : The order of subsets are not important.


// Input format :
// Line 1 : Integer n, Size of input array
// Line 2 : Array elements separated by space
// Line 3 : K 
// Constraints :
// 1 <= n <= 20
// Sample Input :
// 9 
// 5 12 3 17 1 18 15 3 17 
// 6
// Sample Output :
// 3 3
// 5 1


// int subsetSumToK(int input[], int n, int output[][50], int k)
// {
//     if (n == 0)
//     {
//         if (k == 0)
//         {
//             output[0][0] = 0;
//             return 1;
//         }
//         else
//             return 0;
//     }
//     int output1[10000][50], output2[10000][50];
//     int size1 = subsetSumToK(input + 1, n - 1, output1, k - input[0]);
//     int size2 = subsetSumToK(input + 1, n - 1, output2, k);
//     for (int i = 0; i < size1; i++)
//     {
//         int s1 = output1[i][0];
//         for (int j = 1; j <= s1; j++)
//         {
//             output[i][j + 1] = output1[i][j];
//         }
//         output[i][0] = s1 + 1;
//         output[i][1] = input[0];
//     }

//     for (int i = 0; i < size2; i++)
//     {
//         for (int j = 0; j <= output2[i][0]; j++)
//         {
//             output[i + size1][j] = output2[i][j];
//         }
//     }
//     return size1 + size2;
// }

// Print Subset Sum to K
// Send Feedback
// Given an array A and an integer K, print all subsets of A which sum to K.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print them in different lines.
// Input format :
// Line 1 : Size of input array
// Line 2 : Array elements separated by space
// Line 3 : K 
// Sample Input:
// 9 
// 5 12 3 17 1 18 15 3 17 
// 6
// Sample Output:
// 3 3
// 5 1

// #include <iostream>
// using namespace std;
// // #include "solution.h"
// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void subsetSumToK(int input[], int n, int output[], int m, int k){
//     if(n==0){
//         if(k==0){
//             printArray(output, m);
//         }
//         return;
//     }
//     subsetSumToK(input+1, n-1, output, m, k);
//     int i;
//     int out[10000];
//     for(i=0; i<m; i++){
//         out[i] = output[i];
//     }
//     out[i] = input[0];
//     subsetSumToK(input+1, n-1, out, m+1, k-input[0]);
// }
// void printSubsetSumToK(int input[], int size, int k) {
//     int output[1000];
//     subsetSumToK(input, size, output, 0, k);
// }

// int main() {
//   int input[1000],length,k;
//   cin >> length;
//   for(int i=0; i < length; i++)
//     cin >> input[i];
//   cin>>k;
//   printSubsetSumToK(input, length,k);
// }

// Return all codes - String
// Send Feedback
// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. And input string does not contain 0s.
// Input format :
// A numeric string
// Constraints :
// 1 <= Length of String S <= 10
// Sample Input:
// 1123
// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw


// #include <iostream>
// // #include "solution.h"
// using namespace std;
// #include <string.h>
// using namespace std;

// int getCodes(string input, string output[10000])
// {
//     if (input.empty())
//     {
//         output[0] = "";
//         return 1;
//     }
//     string output1[500];
//     string output2[500];
//     char firstchar = 'a' + int(input[0] - 48) - 1;
//     char secondchar = '\0';
//     int size1 = getCodes(input.substr(1), output1);
//     int size2 = 0;
//     if (input[1] != '\0')
//     {
//         int no = (input[0] - 48) * 10 + (input[1] - 48);
//         if (no <= 26)
//         {
//             secondchar = 'a' + no - 1;
//             size2 = getCodes(input.substr(2), output2);
//         }
//     }
//     for (int i = 0; i < size1; i++)
//     {
//         output[i] = firstchar + output1[i];
//     }
//     for (int i = 0; i < size2; i++)
//     {
//         output[i + size1] = secondchar + output2[i];
//     }
//     return size1 + size2;
// }
// int main(){
//     string input;
//     cin >> input;

//     string output[10000];
//     int count = getCodes(input, output);
//     for(int i = 0; i < count && i < 10000; i++)
//         cout << output[i] << endl;
//     return 0;
// }


// Print all Codes - String
// Send Feedback
// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. Just print them in different lines.
// Input format :
// A numeric string S
// Output Format :
// All possible codes in different lines
// Constraints :
// 1 <= Length of String S <= 10
// Sample Input:
// 1123
// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw

// #include <iostream>
// // #include "solution.h"
// using namespace std;
// #include <string.h>
// using namespace std;

// void helper(string input, string output)
// {
//     if (input.empty())
//     {
//         cout << output << endl;
//         return;
//     }
//     char firstchar = 'a' + int(input[0] - 48) - 1;
//     helper(input.substr(1), output + firstchar);
//     if (input[1] != '\0')
//     {
//         int no = (input[0] - 48) * 10 + (input[1] - 48);
//         if (no <= 27)
//         {
//             char secondchar = 'a' + no - 1;
//             helper(input.substr(2), output + secondchar);
//         }
//     }
// }

// void printAllPossibleCodes(string input)
// {
//     string output;
//     helper(input, output);
// }

// int main(){
//     string input;
//     cin >> input;

//     printAllPossibleCodes(input);
//     return 0;
// }


// Print Permutations
// Send Feedback
// Given an input string (STR), print all possible permutations of the input string.
// Note:
// The input string may contain the same characters, so there will also be the same permutations.
// The order of permutations doesn’t matter.
// Input Format:
// The only input line contains a string (STR) of alphabets in lower case
// Output Format:
// Print each permutations in a new line
// Constraint:
// 1<=length of STR<=8
// Time Limit: 1sec
// Sample Input 1:
// cba
// Sample Output 1:
// abc
// acb
// bac
// bca
// cab
// cba

// #include <iostream>
// #include <string>
// using namespace std;

// // #include "solution.h"

// #include <iostream>
// #include <string>
// using namespace std;

// void helper(string input, string output)
// {
//     if (input.empty())
//     {
//         cout << output << endl;
//         return;
//     }
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         helper(input.substr(0, i) + input.substr(i + 1), output + input[i]);
//     }
// }

// void printPermutations(string input)
// {
//     helper(input, "");
// }

// int main() {
//     string input;
//     cin >> input;
//     printPermutations(input);
//     return 0;
// }



// Code Binary Search
// Send Feedback
// You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. If the element is not present in the array/list, then return -1.
// Input format :
// The first line contains an Integer 'N', which denotes the size of the array/list.

// The second line contains 'N' single space-separated integers representing the elements in the array/list.

// The third line contains the value of X to be searched for in the array/list.
// Output Format :
// Print the index at which X is present for each test case, -1 otherwise.
// Constraints :
// 0 <= N <= 10^6
// 0 <= X <= 10^9
// Time Limit: 1 sec
// Sample Input 1:
// 7
// 1 3 7 9 11 12 45
// 3
// Sample Output 1:
// 1
// Sample Input 2:
// 7
// 1 2 3 4 5 6 7
// 9
// Sample Output 2:
// -1


// int binarySearch(int *input, int n, int val)
// {
//     //Write your code here
//     int s=0;
//     int e=n-1;
//     int mid = (s+e)/2;
//     for(int i=0;i<n;i++){
//         if(input[mid]==val){
//             return mid;
//         }
//         else if (val>input[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
//     return -1;

// }


// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int x) {
// 	int start = 0, end = n - 1;
// 	while(start <= end) {
// 		int mid = (start + end) / 2;
// 		if(arr[mid] == x) {
// 			return mid;
// 		}
// 		else if(x < arr[mid]) {
// 			end = mid - 1;
// 		}
// 		else {
// 			start = mid + 1;
// 		}
// 	}

// 	return -1;
// }

// int main() {
// 	// Take array input from the user
// 	int n;
// 	cin >> n;

// 	int input[100];
	
// 	for(int i = 0; i < n; i++) {
// 		cin >> input[i];
// 	}

// 	int x;
// 	cin >> x;

// 	cout << binarySearch(input, n, x) << endl; 	

// }


// Code Merge Two Sorted Arrays
// Send Feedback
// You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// Second line contains 'N' single space separated integers representing the elements of the first array/list.

// Third line contains an integer 'M' representing the size of the second array/list.

// Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
// Output Format :
// For each test case, print the sorted array/list(of size N + M) in a single row, separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// 0 <= M <= 10^5
// Time Limit: 1 sec 
// Sample Input 1 :
// 1
// 5
// 1 3 4 7 11
// 4
// 2 4 6 13
// Sample Output 1 :
// 1 2 3 4 4 6 7 11 13 
// Sample Input 2 :
// 2
// 3
// 10 100 500
// 7
// 4 7 9 25 30 300 450
// 4
// 7 45 89 90
// 0
// Sample Output 2 :
// 4 7 9 10 25 30 100 300 450 500
// 7 45 89 90

// void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
// {
// int i,j,k;
//     i=j=k=0;
//     while(i<size1&&j<size2){
//         if(arr1[i]>arr2[j]){
//             ans[k]=arr2[j];
//             k++;
//             j++;
//         }
//         else {
//             ans[k]=arr1[i];
//             i++;
//             k++;
//         }
//     }
//         while(i<size1){
//             ans[k]=arr1[i];
//             k++;
//             i++;
//         }
//         while(j<size2){
//             ans[k]=arr2[j];
//             k++;
//             j++;
//         }
    
// }   

// Push Zeros to end
// Send Feedback
// You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
// Note:
// Change in the input array/list itself. You don't need to return or print the elements.

// You need to do this in one scan of array only. Don't use extra space.


// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the elements of the array/list in the desired order separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 0 0 1 3 0 0
// Sample Output 1:
// 2 1 3 0 0 0 0
//  Explanation for the Sample Input 1 :
// All the zeros have been pushed towards the end of the array/list. Another important fact is that the order of the non-zero elements have been maintained as they appear in the input array/list.
// Sample Input 2:
// 2
// 5
// 0 3 0 2 0
// 5
// 9 0 0 8 2
// Sample Output 2:
// 3 2 0 0 0
// 9 8 2 0 0 

// void pushZeroesEnd(int *input, int size)
// {
//  int k=0;
//     int i=0;
//     while(i<size){
//         if (input[i]!=0){
//             input[k++]=input[i];
//         }
//         i++;
//     }
   
//     while(k<size){
//     input[k]=0;
//         k++;
//     }
   
// // }


// Rotate array
// Send Feedback
// You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
//  Note:
// Change in the input array/list itself. You don't need to return or print the elements.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.

// Third line contains the value of 'D' by which the array/list needs to be rotated.
// Output Format :
// For each test case, print the rotated array/list in a row separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^4
// 0 <= N <= 10^6
// 0 <= D <= N
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 1 2 3 4 5 6 7
// 2
// Sample Output 1:
// 3 4 5 6 7 1 2
// Sample Input 2:
// 2
// 7
// 1 2 3 4 5 6 7
// 0
// 4
// 1 2 3 4
// 2
// Sample Output 2:
// 1 2 3 4 5 6 7
// 3 4 1 2



// void rotate(int *input, int d, int n)
// {
//     //Write your code here
//    int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=input[i];
//     }
//     int x=0;
//     for(int j=d;j<n;j++){
//         input[x]=input[j];
//         x++;
//     }
//     x=0;
//     for(int k=n-d;k<n;k++){
//         input[k]=temp[x];
//         x++;
//     }
// }

// Second Largest in array
// Send Feedback
// You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.
// If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains an integer 'N' representing the size of the array/list.

// The second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the second largest in the array/list if exists, -2147483648 otherwise.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 13
// Sample Input 2:
// 1
// 5
// 9 3 6 2 9
// Sample Output 2:
// 6
// Sample Input 3:
// 2
// 2
// 6 6
// 4
// 90 8 90 5
// Sample Output 3:
// -2147483648
// 8

// #include<bits/stdc++.h>
// int findSecondLargest(int *input, int n)
// {
//     //Write your code here
//     int second = -1, largest = 0;
//     for( int i =1;i<n;i++){
//         if(input[i]>input[largest]){
//             second =  largest ; //index
//             largest = i;
//         }
//         else if(input[i]!= input[largest]){
//             if(second == -1 || input[i]>input[second])
//                 second = i;
//         }
//     }
//     if(second == -1)
//         return INT_MIN;
//     return input[second];
// }

// Check Array Rotation
// Send Feedback
// You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' (K is greater than 0) in the right hand direction.
// Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the value of 'K' or the index from which which the array/list has been rotated.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 2 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 6
// 5 6 1 2 3 4
// Sample Output 1:
// 2
// Sample Input 2:
// 2
// 5
// 3 6 8 9 10
// 4
// 10 20 30 1
// Sample Output 2:
// 0
// 3
//  int arrayRotateCheck(int *input, int size)
// {
//     //Write your code here
//     int min =input[0],min_index=0;
//     for(int i=1;i<size;i++){
//     if(min>input[i]){
//         min=input[i];
//         min_index=i;
//     }
        
//     }
//     return min_index;
// }


// Sort 0 1 2
// Send Feedback
// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
// 'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// Note:
// You need to change in the given array/list itself. Hence, no need to return or print anything. 
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers(all 0s, 1s and 2s) representing the elements in the array/list.
// Output Format :
// For each test case, print the sorted array/list elements in a row separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 0 1 2 0 2 0 1
// Sample Output 1:
// 0 0 0 1 1 2 2 
// Sample Input 2:
// 2
// 5
// 2 2 0 1 1
// 7
// 0 1 2 0 1 2 0
// Sample Output 2:
// 0 1 1 2 2 
// 0 0 0 1 1 2 2


// void sort012(int *arr, int n)
// {
    //Write your code here
//      for(int i=0;i<n-1;i++){
        
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
            
//     }
// 
//      int low = 0;
//     int hi = n - 1;
//     int mid = 0;
    
//     while (mid <= hi) {
//         switch(arr[mid]) {
        
//             case 0:
//                 swap(arr[low++], arr[mid++]);
//                 break;
//             case 1:
//                 mid++;
//                 break;
//             case 2:
//                 swap(arr[mid], arr[hi--]);
//                 break;
//         }
//     }
// }


// Sum of Two Arrays
// Send Feedback
// Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.
// You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will also contain only single digit at every index.
// Note:
// The sizes N and M can be different. 

// Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of the bigger array/list. Place 0 at the 0th index if there is no carry. 

// No need to print the elements of the output array/list.
// Using the function "sumOfTwoArrays", write the solution to the problem and store the answer inside this output array/list. The main code will handle the printing of the output on its own.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// Second line contains 'N' single space separated integers representing the elements of the first array/list.

// Third line contains an integer 'M' representing the size of the second array/list.

// Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
// Output Format :
// For each test case, print the required sum of the arrays/list in a row, separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// 0 <= M <= 10^5
// Time Limit: 1 sec 
// Sample Input 1:
// 1
// 3
// 6 2 4
// 3
// 7 5 6
// Sample Output 1:
// 1 3 8 0
// Sample Input 2:
// 2
// 3
// 8 5 2
// 2
// 1 3
// 4
// 9 7 6 1
// 3
// 4 5 9
// Sample Output 2:
// 0 8 6 5
// 1 0 2 2 0 

// void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
// {
//     //Write your code here
//       int carry=0,i=size1-1,j=size2-1,num,k;
//      k = max(size1,size2);
//      while  (i >=0 && j >=0){
//          num  =input1[i]+input2[j]+carry;
//          carry=(num / 10);

//          output[k--]= (num % 10);
//          i--;
//          j--;
//      }
//      while(j>=0){
//          num=input2[j]+carry;
//          carry=num/10;
//          output[k--]=num%10;
//          j--;
//      }
//      while(i>=0)    {
//          num=input1[i]+carry;        
//          carry=num/10    ;
//          output[k--]=num%10 ;    
//          i--;
//      }


//      if(k==0)
//          output[k]=carry;
 
// }
//   Replace Character
// Send Feedback
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)
// Output Format :
// Updated string
// Note :
// You don't need to output anything. Just implement the given function.
// Constraints :
// 1 <= Length of String S <= 10^6
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd

// void replaceCharacter(char input[], char c1, char c2) {
//     // Write your code here
//     for(int i=0;input[i]!='\0';i++){
//         if(c1==input[i]){
//             input[i]=c2;
            
//         }
//     }
// }


// Print All Substrings
// Send Feedback
// For a given input string(str), write a function to print all the possible substrings.
// Substring
// A substring is a contiguous sequence of characters within a string. 
// Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
// Output Format:
// Print the total number of substrings possible, where every substring is printed on a single line and hence the total number of output lines will be equal to the total number of substrings.
// Note:
// The order in which the substrings are printed, does not matter.
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// abc
// Sample Output 1:
// a 
// ab 
// abc 
// b 
// bc 
// c 
//  Sample Input 2:
// co
// Sample Output 2:
// c 
// co 
// o

// void printSubstrings(char str[])
// {
//     for(int i=0; str[i]!='\0' ; i++){ 
//         int k; 
//         for(int j = i; str[j]!='\0' ; j++){
//             for(k=i; k<=j; k++ ){
//                 cout<< str[k];
//             } 
//             cout<<endl;
//         }
//     }
// }


// Column Wise Sum
// Send Feedback
// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
// Input Format :
// First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
// Output Format :
// Sum of every ith column elements (separated by space)
// Constraints :
// 1 <= M, N <= 10^3
// Sample Input :
// 4 2 1 2 3 4 5 6 7 8
// Sample Output :
// 16 20

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int a[1000][1000];
    int sum,m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
 
    for(int j=0;j<n;j++){
         sum=0;
        for(int i=0;i<m;i++){
            sum+=a[i][j];
        }
        cout<<sum<<" ";
        
    }
}



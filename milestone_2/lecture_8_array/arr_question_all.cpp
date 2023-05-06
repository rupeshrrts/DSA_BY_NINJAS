// Array Sum
// Send Feedback
// Given an array of length N, you need to find and print the sum of all elements of the array.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^6
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26

// #include<iostream>
// using namespace std;
// int arraysum(int arr[],int n) {
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<arraysum(arr,n);
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     // cout<<"Enter the n ";
//     cin>>n;

//     int input[20];
//     int i=0;
//     int sum=0;
//     while (i<n)
//     {
//         cin>>input[i];
//         sum =sum+input[i];
//         i=i+1;
//     }
//     cout<<sum;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     int arr[n]; //int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     cout << " Sum :-" << sum;
// }

// Function calling
// Send Feedback
// What is the correct syntax for passing array to a function -
// void func(int a[]) {
// }

// int main() {
//     int a[10];
//     // Call function "func" and pass array a
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a[10];
//     cout << sizeof(a) << endl;
// }

// // Assume an integer takes 4 bytes and a pointer takes 8 bytes.
// #include <iostream>
// using namespace std;

// void func(int a[]) {
//     cout << sizeof(a) << endl;
// }

// int main() {
//     int a[10];
//     func(a);
// }

// Linear Search
// Send Feedback
// You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
//  You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
// 'Linear search' is a method for finding an element within an array/list. It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.

// Third line contains the value of X(integer to be searched in the given array/list)
// Output format :
// For each test case, print the index at which X is present or -1, otherwise.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// -2 ^ 31 <= X <= (2 ^ 31) - 1
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 13 4 1 3 6 28
// 3
// Sample Output 1:
// 4
// Sample Input 2:
// 2
// 7
// 2 13 4 1 3 6 28
// 9
// 5
// 7 8 5 9 5
// 5
// Sample Output 2:
// -1
// 2

// int linearSearch(int *arr, int n, int x)
// {
//     //Write your code here
//    for(int i=0;i<n;i++){
//        if(arr[i]==x){
//            return i;
//        }

//    }
//       return -1;
// }



// Arrange Numbers in Array
// Send Feedback
// You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
// Note:
// You need not print the array. You only need to populate it.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first and the only line of each test case or query contains an integer 'N'.
// Output Format :
// For each test case, print the elements of the array/list separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^4

// Time Limit: 1sec
// Sample Input 1 :
// 1
// 6
// Sample Output 1 :
// 1 3 5 6 4 2
// Explanation of Sample Input 1 :
// Since the value of N is 6, the number will be stored in the array in such a fashion that 1 will appear at 0th index, then 2 at the last index, in a similar fashion 3 is stored at index 1. Hence the array becomes 1 3 5 6 4 2.
// Sample Input 2 :
// 2
// 9
// 3
// Sample Output 2 :
// 1 3 5 7 9 8 6 4 2
// 1 3 2


// void arrange(int *arr, int n)
// {
//     //Write your code here
//     int start=0;
//     int end=n-1;
//     int value=1;
//     while(start<=end){
//         if(value%2==0){
//             arr[end]=value;
//             end--;
//             value++;
//         }
//         else{
//             arr[start]=value;
//             value++;
//             start++;
//         }
//     }
// // }

// Find Duplicate
// Send Feedback
// You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
// Note :
// Duplicate number is always present in the given array/list.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the duplicate element in the array/list.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 9
// 0 7 2 5 4 7 1 3 6
// Sample Output 1:
// 7
// Sample Input 2:
// 2
// 5
// 0 2 1 3 1
// 7
// 0 3 1 5 4 3 2
// Sample Output 2:
// 1
// 3


// int findUnique(int *arr, int size)
// {
//     //Write your code here
//     int ans;
//     for(int i=0;i<size;i++){ 
//        ans = ans^arr[i];
            
//     }
//     return ans;   
// }

// Find Unique
// Send Feedback
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
//  Note:
// Unique element is always present in the array/list according to the given condition.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the unique element present in the array.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 3 1 6 3 6 2
// Sample Output 1:
// 1
// Sample Input 2:
// 2
// 5
// 2 4 7 2 7
// 9
// 1 3 1 3 6 6 7 10 7
// Sample Output 2:
// 4
// 10
// int findUnique(int *arr, int size)
// {
//     //Write your code here
//     int ans;
//     for(int i=0;i<size;i++){ 
//        ans = ans^arr[i];
            
//     }
//     return ans;   
// }



// Triplet Sum
// Send Feedback
// You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the array/list which sum to X.
// Note :
// Given array/list can contain duplicate elements.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.

// Third line contains an integer 'X'.
// Output format :
// For each test case, print the total number of triplets present in the array/list.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 50
// 0 <= N <= 10^2
// 0 <= X <= 10^9
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 1 2 3 4 5 6 7 
// 12
// Sample Output 1:
// 5
// Sample Input 2:
// 2
// 7
// 1 2 3 4 5 6 7 
// 19
// 9
// 2 -5 8 -6 0 5 10 11 -3
// 10
// Sample Output 2:
// 0
// 5


//  Explanation for Input 2:
// Since there doesn't exist any triplet with sum equal to 19 for the first query, we print 0.

// For the second query, we have 5 triplets in total that sum up to 10. They are, (2, 8, 0), (2, 11, -3), (-5, 5, 10), (8, 5, -3) and (-6, 5, 11)
// // Intersection of Two Arrays II
// // Send Feedback
// // You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
// // Note :
// // Input arrays/lists can contain duplicate elements.

// // The intersection elements printed would be in the order they appear in the first array/list(ARR1)


// // Input format :
// // The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// // First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// // Second line contains 'N' single space separated integers representing the elements of the first the array/list.

// // Third line contains an integer 'M' representing the size of the second array/list.

// // Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
// // Output format :
// // For each test case, print the intersection elements in a row, separated by a single space.

// // Output for every test case will be printed in a separate line.
// // Constraints :
// // 1 <= t <= 10^2
// // 0 <= N <= 10^3
// // 0 <= M <= 10^3
// // Time Limit: 1 sec 
// // Sample Input 1 :
// // 2
// // 6
// // 2 6 8 5 4 3
// // 4
// // 2 3 4 7 
// // 2
// // 10 10
// // 1
// // 10
// // Sample Output 1 :
// // 2 4 3
// // 10
// // Sample Input 2 :
// // 1
// // 4
// // 2 6 1 2
// // 5
// // 1 2 3 4 2
// // Sample Output 2 :
// // 2 1 2
// // Explanation for Sample Output 2 :
// // Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.


// int tripletSum(int *input, int size, int x)
// {
// 	//Write your code 
    
        
//     int count=0;
//     for(int i=0;i<size-2;i++){
//         for(int j=i+1;j<size-1;j++){
//             for(int k=j+1;k<size;k++){
//                 if(input[i]+input[j]+input[k]==x){
//                     count++;
//                 }
//             }
            
//         }
//     }
//     return count;       
        
// }
// void intersection(int *input1, int *input2, int size1, int size2)
// {
//     //Write your code here
    
//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(input1[i]==input2[j]){
//                   input1[i]=input2[j];
//                 cout<<input1[i]<<" ";
//                 input2[j]=-1;
//                 break;
//             }
//         }
//     }
// }

// Pair Sum
// Send Feedback
// You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
// Note:
// Given array/list can contain duplicate elements. 
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.

// Third line contains an integer 'X'.
// Output format :
// For each test case, print the total number of pairs present in the array/list.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= X <= 10^9
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 9
// 1 3 6 2 5 4 3 2 4
// 7
// Sample Output 1:
// 7
// Sample Input 2:
// 2
// 9
// 1 3 6 2 5 4 3 2 4
// 12
// 6
// 2 8 10 5 -2 5
// 10
// Sample Output 2:
// 0
// 2


//  Explanation for Input 2:
// Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.

// For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).



//     int pairSum(int *input, int size, int x){

// 	//Write your code here
//     int count=0;
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//         if(input[i]+input[j]==x){
    
//             count++;
//         }
//         }
//     }
//     return count;
// }
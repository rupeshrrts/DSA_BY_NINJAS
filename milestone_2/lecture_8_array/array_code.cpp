// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     // Take array input from the user

//     int n;
//     cin >> n;

//     int input[100];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }

//     // Print array
//     for (int i = 0; i < n; i++)
//     {
//         cout << input[i] << endl;
//     }

//     // Largest velement in the array

//     int max = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (input[i] > max)
//         {
//             max = input[i];
//         }
//     }

//     cout << "Max : " << max << endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     /* Read input as specified in the question.
//      * Print output as specified in the question.
//      */
//     int n;
//     cin>>n;
//     int input[100];
//     int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }
//     for(int i=0;i<n;i++){
//         sum+=input[i];
//     }
//     cout<<sum<<endl;
// }

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



// #include <iostream>
// using namespace std;

// void printArray(int input[],int n)
// {
//     cout << "Print :" << endl;
//     for (int i = 0; i < n; i++)

//     {
//         cout << input[i];
//     }
//     cout << endl;
    
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "Enter the n ";
//     cin >> n;

//     int input[100];
//     cout << "Enter the Array Elements";
//     cout << input << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }
//     printArray(input, n);
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// void printArray(int input[], int n) {
// 	for(int i = 0; i < n; i++) {
// 		cout << input[i] << " ";
// 	}
// 	cout << endl;
// }

// void increment(int a, int b[], int n) {
// 	a++;
// 	b[0]++;
// }

// void reverse(int input[], int n) {
// 	int i = 0, j = n - 1;
// 	while(i < j) {
// 		int temp = input[i];
// 		input[i] = input[j];
// 		input[j] =temp;
// 		i++;
// 		j--;
// 	}
// }


// int main() {

// 	int a = 10;
// 	int b[10] = {1, 2, 3, 4, 5};
// 	reverse(b, 5);
// 	printArray(b, 5);

// 	/*
// 	increment(a, b, 10);

// 	cout << "a : " << a << endl;
// 	cout << "b[0] : " << b[0] << endl;
// 	*/
	
// 	//	int input[100] = {1, 2, 3};
	
// 	/*
// 	// Take array input from the user
// 	int n;
// 	cin >> n;
// 	for(int i = 0; i < n; i++) {
// 		cin >> input[i];
// 	}*/

// //	printArray(b, 100);

// }



// Swap Alternate
// Send Feedback
// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
// You don't need to print or return anything, just change in the input array itself.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the elements of the resulting array in a single row separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1sec
// Sample Input 1:
// 1
// 6
// 9 3 6 12 4 32
// Sample Output 1 :
// 3 9 12 6 32 4
// Sample Input 2:
// 2
// 9
// 9 3 6 12 4 32 5 11 19
// 4
// 1 2 3 4
// Sample Output 2 :
// 3 9 12 6 32 4 11 5 19 
// 2 1 4 3 


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

// int duplicateNumber(int *arr, int size)
// {
//     //Write your code here
//     for(int i=0;i<size-1;i++) {
//         for(int j=i+1;j<size;j++) {
//             if(arr[i]==arr[j])	return arr[i];
//         }
//     }
//     return 0;
// }



// Intersection of Two Arrays II
// Send Feedback
// You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
// Note :
// Input arrays/lists can contain duplicate elements.

// The intersection elements printed would be in the order they appear in the first array/list(ARR1)


// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// Second line contains 'N' single space separated integers representing the elements of the first the array/list.

// Third line contains an integer 'M' representing the size of the second array/list.

// Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
// Output format :
// For each test case, print the intersection elements in a row, separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1 sec 
// Sample Input 1 :
// 2
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7 
// 2
// 10 10
// 1
// 10
// Sample Output 1 :
// 2 4 3
// 10
// Sample Input 2 :
// 1
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2
// Sample Output 2 :
// 2 1 2
// Explanation for Sample Output 2 :
// Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches with the first '2' 
// of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.


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


//         int pairSum(int *input, int size, int x){

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

// Sort 0 1
// Send Feedback
// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
// Note:
// You need to change in the given array/list itself. Hence, no need to return or print anything. 
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers(all 0s and 1s) representing the elements in the array/list.
// Output format :
// For each test case, print the sorted array/list elements in a row separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 0 1 1 0 1 0 1
// Sample Output 1:
// 0 0 0 1 1 1 1
// Sample Input 2:
// 2
// 8
// 1 0 1 1 0 1 0 1
// 5
// 0 1 0 1 0
// Sample Output 2:
// 0 0 0 1 1 1 1 1
// 0 0 0 1 1 


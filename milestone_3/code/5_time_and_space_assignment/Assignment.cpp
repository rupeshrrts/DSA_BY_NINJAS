// // Find the Unique Element
// // Send Feedback
// // You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// // Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// // You need to find and return that number which is unique in the array/list.
// //  Note:
// // Unique element is always present in the array/list according to the given condition.
// // Input format :
// // The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// // First line of each test case or query contains an integer 'N' representing the size of the array/list.

// // Second line contains 'N' single space separated integers representing the elements in the array/list.
// // Output Format :
// // For each test case, print the unique element present in the array.

// // Output for every test case will be printed in a separate line.
// // Constraints :
// // 1 <= t <= 10^2
// // 0 <= N <= 10^6

// // Time Limit: 1 sec
// // Sample Input 1:
// // 1
// // 7
// // 2 3 1 6 3 6 2
// // Sample Output 1:
// // 1
// // Sample Input 2:
// // 2
// // 5
// // 2 4 7 2 7
// // 9
// // 1 3 1 3 6 6 7 10 7
// // Sample Output 2:
// // 4
// // 10

// // #include <iostream>
// // using namespace std;

// // // #include "solution.h"
// // int findUnique(int *arr, int n) {
// //     // Write your code here
// //        int ans=0;
// //     for(int i=0;i<n;i++){
// //        ans = ans^arr[i];
// //     }
// //     return ans;
// // }
// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int size;
// //         cin >> size;
// //         int *input = new int[size];

// //         for (int i = 0; i < size; ++i) {
// //             cin >> input[i];
// //         }

// //         cout << findUnique(input, size) << endl;
// //     }

// //     return 0;
// // }


// // Duplicate in array
// // Send Feedback
// // You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3, and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
// // Note :
// // Duplicate number is always present in the given array/list.
// // Input format :
// // The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// // First line of each test case or query contains an integer 'N' representing the size of the array/list.

// // Second line contains 'N' single space separated integers representing the elements in the array/list.
// // Output Format :
// // For each test case, print the duplicate element in the array/list.

// // Output for every test case will be printed in a separate line.
// // Constraints :
// // 1 <= t <= 10^2
// // 0 <= N <= 10^6

// // Time Limit: 1 sec
// // Sample Input 1:
// // 1
// // 9
// // 0 7 2 5 4 7 1 3 6
// // Sample Output 1:
// // 7
// // Sample Input 2:
// // 2
// // 5
// // 0 2 1 3 1
// // 7
// // 0 3 1 5 4 3 2
// // Sample Output 2:
// // 1
// // 3

// // #include <iostream>
// // using namespace std;

// // // #include "solution.h"
// // int findDuplicate(int *arr, int n)
// // {
// //     //Write your code here
// //     /*
// //     Time complexity 0(n2)
// //     for(int i=0;i<n-1;i++){
// //          for(int j=i+1;j<n;j++){
// //              if(arr[i]==arr[j]){
// //                  return arr[i];
// //              }
        
// //     }
       
// // }
// //  return 0;   
// //  */
// //     int sum=0;
// //     int ans=(n-1)*(n-2)/2;
// //      for(int i=0;i<n;i++){
// //         sum+=arr[i];
// //     }
// //     int duplicate=sum-ans;
// //        return duplicate;
       
// // }
// // int main()
// // {
// // 	int t;
// // 	cin >> t;
	
// // 	while (t--)
// // 	{
// // 		int size;
// // 		cin >> size;
// // 		int *input = new int[size];

// // 		for (int i = 0; i < size; i++)
// // 		{
// // 			cin >> input[i];
// // 		}

// // 		cout << findDuplicate(input, size) << endl;
// // 	}

// // 	return 0;
// // }

// // Array Intersection
// // Send Feedback
// // You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
// // Note :
// // Input arrays/lists can contain duplicate elements.

// // The intersection elements printed would be in ascending order.


// // Input format :
// // The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// // The first line of each test case or query contains an integer 'N' representing the size of the first array/list.

// // The second line contains 'N' single space separated integers representing the elements of the first the array/list.

// // The third line contains an integer 'M' representing the size of the second array/list.

// // The fourth line contains 'M' single space separated integers representing the elements of the second array/list.
// // Output format :
// // For each test case, print the intersection elements in a row, separated by a single space.

// // Output for every test case will be printed in a separate line.
// // Constraints :
// // 1 <= t <= 10^2
// // 0 <= N <= 10^6
// // 0 <= M <= 10^6

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
// // 2 3 4
// // 10
// // Sample Input 2 :
// // 1
// // 4
// // 2 6 1 2
// // 5
// // 1 2 3 4 2
// // Sample Output 2 :
// // 1 2 2
// // Explanation for Sample Output 2 :
// // Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.

// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // // #include "solution.h"

// // void intersection(int *arr1, int *arr2, int n, int m)
// // {
// //     // Write your code here
// //     sort(arr1, arr1 + n);
// //     sort(arr2, arr2 + m);
// //     int i = 0, j = 0;
// //     while (i < n && j < m)
// //     {
// //         if (arr1[i] == arr2[j])
// //         {
// //             cout << arr1[i] << " ";
// //             i++;
// //             j++;
// //         }
// //         else if (arr1[i] < arr2[j])
// //             i++;
// //         else
// //             j++;
// //     }
// // }
// // int main()
// // {
// // 	int t;
// // 	cin >> t;
// // 	while (t--)
// // 	{

// // 		int size1, size2;

// // 		cin >> size1;
// // 		int *input1 = new int[size1];

// // 		for (int i = 0; i < size1; i++)
// // 		{
// // 			cin >> input1[i];
// // 		}

// // 		cin >> size2;
// // 		int *input2 = new int[size2];

// // 		for (int i = 0; i < size2; i++)
// // 		{
// // 			cin >> input2[i];
// // 		}

// // 		intersection(input1, input2, size1, size2);
		
// // 		delete[] input1;
// // 		delete[] input2;
		
// // 		cout << endl;
// // 	}

// // 	return 0;
// // }

// // code opf factorial?
// Pair sum in array
// Send Feedback
// You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.
// Note:
// Given array/list can contain duplicate elements. 
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the first array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.

// Third line contains an integer 'num'.
// Output format :
// For each test case, print the total number of pairs present in the array/list.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^4
// 0 <= num <= 10^9

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

// #include <iostream>
// #include <algorithm>
// using namespace std;

// // #include "solution.h"
//  int pairSum(int *arr, int n, int num)
// {
// 	//Write your code here
//     int count=0;
//      for(int i=0;i<n-1;i++){
//           for(int j=i+1;j<n;j++){
//               if(arr[i]+arr[j]==num){
//                   count++;
//               }
        
//     }
        
//     }
       
// return count;
// }
// int main()
// {
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		int size;
// 		int x;

// 		cin >> size;
// 		int *input = new int[size];

// 		for (int i = 0; i < size; i++)
// 		{
// 			cin >> input[i];
// 		}

// 		cin >> x;

// 		cout << pairSum(input, size, x) << endl;

// 		delete[] input;
// 	}
	
// 	return 0;
// }


// Triplet sum
// Send Feedback
// You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.
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
// 1 <= t <= 10^2
// 0 <= N <= 10^3
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

// #include <iostream>
// #include <algorithm>
// using namespace std;

// // #include "solution.h"
// int pairSum(int *arr, int startIndex, int endIndex, int num)
// {
// 	int numPair = 0;
// 	while (startIndex < endIndex)
// 	{
// 		if (arr[startIndex] + arr[endIndex] < num)
// 		{
// 			startIndex++;
// 		}
// 		else if (arr[startIndex] + arr[endIndex] > num)
// 		{
// 			endIndex--;
// 		}
// 		else
// 		{
// 			int elementAtStart = arr[startIndex];
// 			int elementAtEnd = arr[endIndex];
// 			if (elementAtStart == elementAtEnd)
// 			{
// 				int totalElementsFromStartToEnd = (endIndex - startIndex) + 1;
// 				numPair += (totalElementsFromStartToEnd * (totalElementsFromStartToEnd - 1) / 2);
// 				return numPair;
// 			}
// 			int tempStartIndex = startIndex + 1;
// 			int tempEndIndex = endIndex - 1;
// 			while (tempStartIndex <= tempEndIndex && arr[tempStartIndex] == elementAtStart)
// 			{
// 				tempStartIndex += 1;
// 			}
// 			while (tempEndIndex >= tempStartIndex && arr[tempEndIndex] == elementAtEnd)
// 			{
// 				tempEndIndex -= 1;
// 			}
// 			int totalElementsFromStart = (tempStartIndex - startIndex);
// 			int totalElementsFromEnd = (endIndex - tempEndIndex);
// 			numPair += (totalElementsFromStart * totalElementsFromEnd);
// 			startIndex = tempStartIndex;
// 			endIndex = tempEndIndex;
// 		}
// 	}
// 	return numPair;
// }
// int tripletSum(int *arr, int n, int num)
// {
// 	sort(arr, arr + n);
// 	int numTriplets = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int pairSumFor = num - arr[i];
// 		int numPairs = pairSum(arr, (i + 1), (n - 1), pairSumFor);
// 		numTriplets += numPairs;
// 	}
// 	return numTriplets;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		int size;
// 		int x;
// 		cin >> size;
        

// 		int *input = new int[size];

// 		for (int i = 0; i < size; i++)
// 		{
// 			cin >> input[i];
// 		}
// 		cin >> x;

// 		cout << tripletSum(input, size, x) << endl;

// 		delete[] input;
// 	}

// 	return 0;
// }


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

// #include <iostream>
// using namespace std;

// // #include "solution.h"
// #include <iostream>
// using namespace std;

// // #include "solution.h"
// void reverse(int *input,int start,int end){
//     while(start<end){
//         int temp = input[start];
//         input[start] = input[end];
//         input[end] = temp;
//         end--;
//         start++;
        
//     }
// }

// void rotate(int *input, int d, int n)
// {
//     //Write your code here
//     if(d>=n&&n!=0){
//         d  = d%n;
//     }
//     else if(n==0){
//         return ;
//     }
//     reverse(input,0,n-1);
//     reverse(input,0,n-d-1);
//     reverse(input,n-d,n-1);
    
    
// }
// int main()
// {
// 	int t;
// 	cin >> t;
	
// 	while (t--)
// 	{
// 		int size;
// 		cin >> size;

// 		int *input = new int[size];

// 		for (int i = 0; i < size; ++i)
// 		{
// 			cin >> input[i];
// 		}

// 		int d;
// 		cin >> d;

// 		rotate(input, d, size);

// 		for (int i = 0; i < size; ++i)
// 		{
// 			cout << input[i] << " ";
// 		}
		
// 		delete[] input;
// 		cout << endl;
// 	}

// 	return 0;
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

// #include <iostream>
// using namespace std;

// // #include "solution.h"
// int arrayRotateCheck(int *input, int size)
// {
//     //Write your code here
//      int i = 0;
//     for (; i < size - 1; i++)
//     {
//         if (input[i + 1] < input[i])
//         {
//             return i + 1;
//         }
        
//     }
//     return 0;
// }
// int main()
// {

// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{

// 		int size;
// 		cin >> size;
// 		int *input = new int[size];

// 		for (int i = 0; i < size; i++)
// 		{
// 			cin >> input[i];
// 		}

// 		cout << arrayRotateCheck(input, size) << endl;
// 		delete[] input;
// 	}
	
// 	return 0;
// }
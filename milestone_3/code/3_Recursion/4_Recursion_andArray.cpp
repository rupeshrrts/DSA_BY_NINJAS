// #include <iostream>
// using namespace std;

// bool is_sorted2(int a[], int size) {
// 	if (size == 0 || size ==1) {
// 		return true;
// 	}

// 	bool isSmallerOutput = is_sorted2(a + 1, size -1);
// 	if (!isSmallerOutput) {
// 		return false;
// 	}
// 	if (a[0] > a[1]) {
// 		return false;
// 	} else {
// 		return true;
// 	}

// }

// bool is_sorted(int a[], int size) {
// 	if (size == 0 || size ==1) {
// 		return true;
// 	}

// 	if (a[0] > a[1]) {
// 		return false;
// 	}
// 	bool isSmallerSorted = is_sorted(a + 1, size - 1);
// 	return isSmallerSorted;
// 	/*if (isSmallerSorted) {
// 		return true;
// 	} else {
// 		return false;
// 	}*/
// }

// int main() {

// }

// Question

// Sum of Array
// Send Feedback
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1 :
// 3
// 9 8 9
// Sample Output 1 :
// 26
// Sample Input 2 :
// 3
// 4 2 1
// Sample Output 2 :
// 7

// #include <iostream>
// using namespace std;
// int sum(int input[], int n)
// {

//     if (n <= 0)
//     {
//         return 0;
//     }
//     return (sum(input, n - 1) + input[n - 1]);
// }
// int main()
// {
//     int n;
//     cin >> n;

//     int *input = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }

//     cout << sum(input, n) << endl;
// }

// Check Number
// Send Feedback
// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// 'true' or 'false'
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1 :
// 3
// 9 8 10
// 8
// Sample Output 1 :
// true
// Sample Input 2 :
// 3
// 9 8 10
// 2
// Sample Output 2 :
// false

#include <iostream>
// #include "Solution.h"
using namespace std;
bool checkNumber(int input[], int size, int x)
{

    if (size < 0)
    {
        return false;
    }
    if (input[size - 1] == x)
    {
        return true;
    }
    return checkNumber(input, size - 1, x);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    if (checkNumber(input, n, x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

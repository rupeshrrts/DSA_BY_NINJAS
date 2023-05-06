// Check Case
// Send Feedback
// Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z)
// 0, if the character is a lowercase alphabet (a - z)
// -1, if the character is not an alphabet
// Input format :
// Single Character
// Output format :
// 1 or 0 or -1
// Constraints :
// Input can be any character
// Sample Input 1 :
// v
// Sample Output 1 :
// 0
// Sample Input 2 :
// V
// Sample Output 2 :
// 1
// Sample Input 3 :
// #
// Sample Output 3 :
// -1

// #include<iostream>
// using namespace std;

// int main(){
//     char n;
//     cin>>n;
//     if (n>=65&&n<=90)
//     {
//         cout<<"1";
//     }
//     else if (n>=97&&n<=122)
//     {
//         cout<<"0";
//     }
//     else{
//         cout<<"-1";
//     }
// }



#include <iostream>
using namespace std;

// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
	int sum = 0; // initialize sum

	// Iterate through all elements
	// and add them to sum
	for (int i = 0; i < n; i++)
    {
		sum =sum + arr[i];
    }
	return sum;
}

// Driver code
int main()
{
	int arr[100]; //= { 12, 3, 4, 15 };
    int a;
	int n;// = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the n ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        a=sum(arr, n);
    }
	cout << "Sum of given array is " << a;
	
}

// This code is contributed by rathbhupendra

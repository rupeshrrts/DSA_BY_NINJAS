// #include <iostream>
// using namespace std;

// void selectionSort(int input[], int n) {
// 	for(int i = 0; i < n-1; i++ ) {
// 	// Find min element in the array
// 	int min = input[i], minIndex = i;
// 	for(int j = i+1; j < n; j++) {
// 		if(input[j] < min) {
// 			min = input[j];
// 			minIndex = j;
// 		}
// 	}
// 	// Swap
// 	int temp = input[i];
// 	input[i] = input[minIndex];
// 	input[minIndex] = temp;
// 	}
// }

// int main() {
// 	int input[] = {3, 1, 6, 9, 0, 4};
// 	selectionSort(input, 6);
// 	for(int i = 0; i < 6; i++) {
// 		cout << input[i] << " ";
			 
// 	}
// 	cout << endl;
// }


// Selection sort in C++

// #include <iostream>
// using namespace std;

// // function to swap the the position of two elements
// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// // function to print an array
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << array[i] << " ";
//   }
//   cout << endl;
// }

// void selectionSort(int array[], int size) {
//   for (int step = 0; step < size - 1; step++) {
//     int min_idx = step;
//     for (int i = step + 1; i < size; i++) {

//       // To sort in descending order, change > to < in this line.
//       // Select the minimum element in each loop.
//       if (array[i] < array[min_idx])
//         min_idx = i;
//     }

//     // put min at the correct position
//     swap(&array[min_idx], &array[step]);
//   }
// }

// // driver code
// int main() {
//   int data[] = {20, 12, 10, 15, 2};
//   int size = sizeof(data) / sizeof(data[0]);
//   selectionSort(data, size);
//   cout << "Sorted array in Acsending Order:\n";
//   printArray(data, size);
// }


// Code Bubble Sort
// Send Feedback
// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.
// Note:
// Change in the input array/list itself. You don't need to return or print the elements.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output format :
// For each test case, print the elements of the array/list in sorted order separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28
// Sample Input 2:
// 2
// 5
// 9 3 6 2 0
// 4
// 4 3 2 1
// Sample Output 2:
// 0 2 3 6 9
// 1 2 3 4

// void bubbleSort(int *input, int size)
// {
//     //Write your code here
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(input[j]>input[j+1]){
//                 swap(input[j],input[j+1]);
//             }
//         }
//     }
// }



//bubble sort

// #include <iostream>
// using namespace std;
// void printArray(int input[], int n) {
// 	for(int i = 0; i < n; i++) {
// 		cout << input[i] << " " ;
// 	}
// 	cout << endl;
// }

// void bubbleSort(int arr[], int n) {
// 	for(int j = 0; j < n - 1; j++) {
// 		for(int i = 0; i < n - 1 - j; i++) {
// 			if(arr[i] > arr[i+1]) {
// 				int temp = arr[i];
// 				arr[i] = arr[i+1];
// 				arr[i+1] = temp;
// 			}
// 		}
// 	}
// }

// int main() {
// 	// Take array input from the user
// 	int n;
// 	cin >> n;

// 	int input[100];	
// 	for(int i = 0; i < n; i++) {
// 		cin >> input[i];
// 	}
	
// 	bubbleSort(input, n);
// 	printArray(input, n);	
// }



// Code Insertion Sort
// Send Feedback
// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
//  Note:
// Change in the input array/list itself. You don't need to return or print the elements.
//  Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.
// Output Format :
// For each test case, print the elements of the array/list in sorted order separated by a single space.

// Output for every test case will be printed in a separate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28
// Sample Input 2:
// 2
// 5
// 9 3 6 2 0
// 4
// 4 3 2 1
// Sample Output 2:
// 0 2 3 6 9
// 1 2 3 4 

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
// 	for(int i = 1; i < n; i++) {
// 		int current = arr[i];
// 		int j;
// 		for(j = i - 1; j >= 0; j--) {
// 			if(current < arr[j]) {
// 				arr[j+1] = arr[j];
// 			}
// 			else {
// 				break;
// 			}
// 		}
// 		arr[j+1] = current;
// 	}

// }

// void printArray(int input[], int n) {
// 	for(int i = 0; i < n; i++) {
// 		cout << input[i] << " " ;
// 	}
// 	cout << endl;
// }

// int main() {
// 	// Take array input from the user
// 	int n;
// 	cin >> n;

// 	int input[100];
	
// 	for(int i = 0; i < n; i++) {
// 		cin >> input[i];
// 	}
	
// 	insertionSort(input, n);

// 	printArray(input, n);
	
// }


// #include <iostream>
// using namespace std;

// int length(char input[]) {
// 	int count = 0;
// 	for(int i = 0; input[i] != '\0'; i++) {
// 		count++;
// 	}
// 	return count;
// }

// int main() {
// 	char name[100];
// 	cout << "Enter your name : ";
// 	cin >> name;
// 	/*
// 	name[4] = 'x';
// 	name[3] = 'd';
// 	name[1] = '\0';
// 	*/
// 	cout << "Name is : " << name << endl;

// 	cout << "Length : " << length(name) << endl;


// }

//this is the
// #include <iostream>
// using namespace std;

// int length(char input[]) {
// 	int count = 0;
// 	for(int i = 0; input[i] != '\0'; i++) {
// 		count++;
// 	}
// 	return count;
// }

// void reverseString(char input[]) {
// 	int len = length(input);
// 	int i = 0, j = len - 1;
// 	while(i < j) {
// 		char temp = input[i];
// 		input[i] = input[j];
// 		input[j] = temp;
// 		i++;
// 		j--;
// 	}
// }

// int main() {
// 	char input[100];
// 	//cin >> input;
// 	cin.getline(input, 100);
	
// 	reverseString(input);
// 	cout << input << endl;
// }


// #include <iostream>
// using namespace std;
// #include <cstring>


// void printAllPrefixes(char input[]) {
// 	// i represents end index of my prefix
// 	for(int i = 0; input[i] != '\0'; i++) {
// 			// j represents start index of my prefix
// 		for(int j = 0; j <= i; j++) {
// 			cout << input[j];
// 		}
// 		cout << endl;
// 	}
// }

// int main() {
// 	char input1[100] = "abcd";
// 	printAllPrefixes(input1);



	
// 	/*
// 	char input2[100] = "xy";
	
// 	cout << "Before copying : ";
// 	cout << "Input 1 : " << input1 << endl;
// 	cout << "Input 2 : " << input2 << endl;
// 	//strcpy(input1, "hello");
	
// 	strncpy(input1, input2, 4);
	
// 	cout << "After copying : ";
// 	cout << "Input 1 : " << input1 << endl;
// 	cout << "Input 2 : " << input2 << endl;
// 	*/




// 	//cin >> input1;
// 	//cin >> input2;


// 	/*
// 	if(strcmp(input1, input2) == 0) {
// 		cout << "true" << endl;
// 	}
// 	else {
// 		cout << "false" << endl;
// 	}
// 	*/




// 	/*
// 	int len = strlen(input);
// 	cout << "Length : " << len << endl;
// 	*/


// }


// #include <iostream>
// using namespace std;

// void printArray(int a[][5], int m, int n) {
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0;  j < n; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;	
// 	}
// }

// int main() {

// 	int a[5][5] = {{1, 2}, {3, 4}};
// 	printArray(a, 5, 5);


// 	/*
// 	int a[100][100];
// 	int m, n;
// 	cin >> m >> n;


// 	// Taking input
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0; j < n; j++) {
// 			cin >> a[i][j];
// 		}
// 	}

// 	printArray(a, m, n);
// 	*/
// 	/*
// 	// print array row wise
// 	cout << "Row wise : " << endl;
// 	for(int i = 0; i < m; i++) {
// 		for(int j = 0;  j < n; j++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;	
// 	}

// 	cout << "Column wise : " << endl;
// 	for(int j = 0; j < n; j++) {
// 		for(int i = 0; i < m; i++) {
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// 	*/
// }

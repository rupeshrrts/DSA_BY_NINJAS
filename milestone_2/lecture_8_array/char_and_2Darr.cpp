// #include<iostream>
// using namespace std;

// int main(){
//     int name[100];
//     int n;
//     cin>>n;
//     for (int i = 0; i <n ; i++)
//     {
//         cin>>name[i];
//     }
//     for (int i = 0; i <n ; i++)
//     {
//         cout<<name[i]<<endl;
//     }

// }

// #include <iostream>
// using namespace std;
// int length(char input[])
// {
//     int count = 0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     char name[100];
//     cout << "Enter the name :" << endl;
//     cin >> name;
//     // name[3] = 'd';
//     // name[4] = 'x';
//     // name[1] = '\0';
//     cout << "you have Entered :" << endl
//          << name << endl;
//     cout<<"Length :"<<length(name)<<endl;
// }



// #include <iostream>
// using namespace std;


// int main()
// {
//     char name[4];
//     cout << "Enter the name :" << endl;
//     //here we can take input 4-1.
//     cin >> name;
    
//     cout << "you have Entered :" << endl
//          << name << endl;

// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     char name[100];
//     cout << "Enter the name :" << endl;
//     // if we take rupesh kumar than it will print rupesh
//     cin >> name;
//     // cin ignore space,rab,newline
    
//     cout << "you have Entered :" << endl
//          << name << endl;

// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     char name[100];
//     cout << "Enter the name :" << endl;
//     // if we take rupesh kumar than it will print rupesh
//     cin.getline(name,100);
//     // cin >> name;
//     // cin ignore space,rab,newline
    
//     cout << "you have Entered :" << endl
//          << name << endl;

// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     char name[100];
//     cout << "Enter the name :" << endl;
//     // if we take rupesh kumar than it will print rupesh
//     cin.getline(name,3);
//     // cin >> name;
//     // cin ignore space,rab,newline
    
//     cout << "you have Entered :" << endl
//          << name << endl;

// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     char name[100];
//     cout << "Enter the name :" << endl;
//     // if we take rupesh kumar than it will print rupesh
//     cin.getline(name,100,'o');
//     // cin >> name;
//     // cin ignore space,rab,newline
    
//     cout << "you have Entered :" << endl
//          << name << endl;

// }



// // reverse the charater
// #include <iostream>
// using namespace std;

// int length(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// void reverseString(char input[]){
//     int len=length(input);
//     int i=0,j=len-1;
//     while (i<j)
//     {
//         char temp=input[i];
//         input[i]=input[j];
//         input[j]=temp;
//         i++;
//         j--;
//     }
    
// }

// int main()
// {
//     char input[100];
//     cout << "Enter the name :" << endl;
   
//     cin.getline(input,100);
//     reverseString(input);
//     cout<<input<<endl;

// }


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char input[100];
//     cin.getline(input,100);
//     // cin>>input;
//     int len=strlen(input);
//     cout<<input<<endl;
//     cout<<len<<endl;

// }




// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char input1[100],input2[100];
//     cin.getline(input1,100);
//     cin.getline(input2,100);
//     // cin>>input1;
//     // cin>>input2;

//     if (strcmp(input1,input2)==0)
//     {
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"flase"<<endl;
//     }   
//     // int len=strlen(input);
//     // cout<<input<<endl;
//     // cout<<len<<endl;

// }




//3
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char input1[100]="asddf";
//     char input2[100]="ert";
//     // cin.getline(input1,100);
//     // cin.getline(input2,100);
//     cout<<"Before copy"<<endl;
//     cout<<input1<<endl;
//     cout<<input2<<endl;
//     strcpy(input1,input2);

//     cout<<"after copy"<<endl;
//     cout<<input1<<endl;
//     cout<<input2<<endl;
// }



// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char input1[100]="asddf";
//     char input2[100]="ert";
//     // cin.getline(input1,100);
//     // cin.getline(input2,100);
//     cout<<"Before copy"<<endl;
//     cout<<input1<<endl;
//     cout<<input2<<endl;
//     strcpy(input1,"Hello");

//     cout<<"after copy"<<endl;
//     cout<<input1<<endl;
//     cout<<input2<<endl;

// }


//4
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char input1[100]="asddf";
//     char input2[100]="er";
//     // cin.getline(input1,100);
//     // cin.getline(input2,100);
//     cout<<"Before copy"<<endl;
//     cout<<input1<<endl;
//     cout<<input2<<endl;
//     strncpy(input1,input2,3);


//     cout<<"after copy"<<endl;
//     cout<<input1<<endl;
//     cout<<input2<<endl;

// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// void printALLprefix(char input[]){
//     for (int i = 0; input[i]!='\0'; i++)
//     {
//         for (int j = 0; j<=i; j++)
//         {
//             cout<<input[j];
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     char input1[100]="abcd";
//     printALLprefix(input1);
    

// }


// Largest Row or Column
// Send Feedback
// For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
// Note :
// If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output Format :
// For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
// OR
// If column sum is maximum, then print: "column" <col_index> <col_sum>
// It will be printed in a single line separated by a single space between each piece of information.

// Output for every test case will be printed in a seperate line.
//  Consider :
// If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.
// Constraints :
// 1 <= t <= 10^2
// 1 <= N <= 10^3
// 1 <= M <= 10^3
// Time Limit: 1sec

// #include <iostream>
// using namespace std;

// // #include "solution.h"

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int row, col;
// 		cin >> row >> col;

// 		int **input = new int *[row];
// 		for (int i = 0; i < row; i++)
// 		{
// 			input[i] = new int[col];
// 			for (int j = 0; j < col; j++)
// 			{
// 				cin >> input[i][j];
// 			}
// 		}

// 		findLargest(input, row, col);
// 		cout << endl;
// 	}
// }


// /*
// You can use minimum value of integer as -2147483647 and 
// maximum value of integer as 2147483647
// */
// void findLargest(int **input, int nRows, int mCols)
// {
//   int maxSum=INT32_MIN, index=0;
//   int *arr=new int[mCols], flag=0;
//   // Flag -> 0 rows, Flag -> 1 cols
  
//   for(int i=0; i<nRows; i++) {
//     int sum=0;
//     for(int j=0; j<mCols; j++) {
//       sum+=input[i][j];
//       arr[j]+=input[i][j];
//     }
//     if(sum>maxSum) {
//       maxSum=sum;
//       index=i;
//     }
//   }
  
//   for(int i=0;i<mCols;i++) {
//     if(arr[i]>maxSum) {
//       maxSum=arr[i];
//       index=i;
//       flag=1;
//     }
//   }
  
//   flag ? cout<<"column "<<index<<" "<<maxSum<<endl :
//     cout<<"row "<<index<<" "<<maxSum<<endl;
// }

// Wave Print
// Send Feedback
// For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output format :
// For each test case, print the elements of the two-dimensional array/list in the sine wave order in a single line, separated by a single space.

// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1sec
// Sample Input 1:
// 1
// 3 4 
// 1  2  3  4 
// 5  6  7  8 
// 9 10 11 12
// Sample Output 1:
// 1 5 9 10 6 2 3 7 11 12 8 4
// Sample Input 2:
// 2
// 5 3 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 10 11 12 
// 13 14 15
// 3 3
// 10 20 30 
// 40 50 60
// 70 80 90
// Sample Output 2:
// 1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 
// 10 40 70 80 50 20 30 60 90 


// void wavePrint(int **input, int nRows, int mCols)
// {
//     //Write your code here
//     for(int j=0;j<mCols;j++){
//         if(j%2==0){
//             for(int i=0;i<nRows;i++){
//                 cout<<input[i][j]<<" ";
//             }
        
//         }
//         else{
//             for(int i=nRows-1;i>=0;i--){
//                 cout<<input[i][j]<<" ";
//             }
        
//         }
//     }
// }



// Spiral Print
// Send Feedback
// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)
//  Mind that every element will be printed only once.
// Refer to the Image:
// Spiral path of a matrix

// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.
// Output format :
// For each test case, print the elements of the two-dimensional array/list in the spiral form in a single line, separated by a single space.

// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1sec
// Sample Input 1:
// 1
// 4 4 
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16
// Sample Output 1:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
// Sample Input 2:
// 2
// 3 3 
// 1 2 3 
// 4 5 6 
// 7 8 9
// 3 1
// 10
// 20
// 30
// Sample Output 2:
// 1 2 3 6 9 8 7 4 5 
// 10 20 30 

// void spiralPrint(int **input, int nRows, int mCols)
// {
//     if (nRows == 0 || mCols == 0)
//     {
//         return;
//     }

//     int i, rowStart = 0, colStart = 0;

//     int numElements = nRows * mCols, count = 0;

//     while (count < numElements)
//     {
//         for (i = colStart; count < numElements && i < mCols; ++i)
//         {
//             cout << input[rowStart][i] << " ";
//             count++;
//         }
//         rowStart++;

//         for (i = rowStart; count < numElements && i < nRows; ++i)
//         {
//             cout << input[i][mCols - 1] << " ";
//             count++;
//         }
//         mCols--;

//         for (i = mCols - 1; count < numElements && i >= colStart; --i)
//         {
//             cout << input[nRows - 1][i] << " ";
//             count++;
//         }
//         nRows--;

//         for (i = nRows - 1; count < numElements && i >= rowStart; --i)
//         {
//             cout << input[i][colStart] << " ";
//             count++;
//         }
//         colStart++;
//     }
// }

// Check Permutation
// Send Feedback
// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
// Permutations of each other
// Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

// Example: 
// str1= "sinrtg" 
// str2 = "string"

// The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
// Input Format:
// The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

// The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
// Note:
// All the characters in the input strings would be in lower case.
// Output Format:
// The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

// You are not required to print anything. It has already been taken care of. Just implement the function. 
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// abcde
// baedc
// Sample Output 1:
// true
// Sample Input 2:
// abc
// cbd
// Sample Output 2:
// false

// bool isPermutation(char input1[], char input2[]) {
//     // Write your code here
//     long int arr[26]; 
//     // a frequency array counting the number of characters in the string
//     for (int i = 0; i < 26; i++)
//         arr[i] = 0;
//     for (int i = 0; input1[i] != '\0' ; i++){
//         arr[input1[i] - 'a']++; // counting number of characters in input1
//     }
//     for (int i = 0; input2[i] != '\0'; i++){
//         arr[input2[i] - 'a']--; //removing those characters if they are present in input2
//     }

//     for (int i = 0; i < 26; i++){
//         if (arr[i] != 0) // if the entire array is not empty again, it means input2 has more or less characters than input1
//             return false;
//     }
//     return true;
    
   
// }


// Remove Consecutive Duplicates
// Send Feedback
// For a given string(str), remove all the consecutive duplicate characters.
// Example:
// Input String: "aaaa"
// Expected Output: "a"

// Input String: "aabbbcc"
// Expected Output: "abc"
//  Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
// Output Format:
// The only line of output prints the updated string.
// Note:
// You are not required to print anything. It has already been taken care of.
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// aabccbaa
// Sample Output 1:
// abcba
// Sample Input 2:
// xxyyzxx
// Sample Output 2:
// xyzx

// #include <iostream>
// #include <cstring>
// using namespace std;

// // #include "solution.h"

// int main() {
//     int size = 1e6;
//     char str[size];
//     cin >> str;
//     removeConsecutiveDuplicates(str);
//     cout << str;
// }

// // #include<cstring>
// void removeConsecutiveDuplicates(char a[]) {
//     // Write your code here
    
    
//      int i=0,j,s=strlen(a);
//      while(i < s)
//      {
//         j=i+1;
//      if(a[i]!=a[j])
//         {
//             i++;
//         }
//         else
//          {
//              while(j < s)
//              {
//                  char t = a[j];
//     a[j] = a[j+1];
//              j++;
//              }
//              s--;
//      	}
//      }
    
    
//    }

// Reverse Each Word
// Send Feedback
// Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
// Example:
// Input Sentence: "Hello, I am Aadil!"
// The expected output will print, ",olleH I ma !lidaA".
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.
// Output Format:
// The only line of output prints the sentence(string) such that each word in the sentence is reversed. 
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// emocleW ot gnidoC sajniN
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// syawlA tnedni ruoy edoc


// void reverseEachWord(char str[]) {
//     // Write your code here
//     // int i=0;
//     // int j=length(str)-1;
//     // while(i<=j){
//     //     char temp=str[i];
//     //     str[i]=str[j];
//     //     str[j]=temp;
//     //     i++;
//     //     j--;
//     // }
//     int len=strlen(str);
//     int start=0,end;
//     for(int i=0;i<len;i++)
//     {
//         if(str[i]==' ' || i==len-1)
//         {
//             if(i==len-1)
//                 end=i;
        
//             else
//                 end=i-1;
                  
//             while(start<end)
//             {
//                 char temp=str[start];
//                 str[start]=str[end];
//                 str[end]=temp;
//                 start++;
//                 end--;
//             }
//             start=i+1;
//         }
// }
// }

// Remove character
// Send Feedback
// For a given a string(str) and a character X, write a function to remove all the occurrences of X from the given string.
// The input string will remain unchanged if the given character(X) doesn't exist in the input string.
// Input Format:
// The first line of input contains a string without any leading and trailing spaces.

// The second line of input contains a character(X) without any leading and trailing spaces.
// Output Format:
// The only line of output prints the updated string. 
// Note:
// You are not required to print anything explicitly. It has already been taken care of.
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// aabccbaa
// a
// Sample Output 1:
// bccb
// Sample Input 2:
// xxyyzxx
// y
// Sample Output 2:
// xxzxx

// #include <iostream>
// #include <cstring>
// using namespace std;

// #include "solution.h"

// int main() {
//     int size = 1e6;
//     char str[size];
//     cin.getline(str, size);
//     char c;
//     cin >> c;
//     removeAllOccurrencesOfChar(str, c);
//     cout << str;
// }

// void removeAllOccurrencesOfChar(char input[], char c) {
//     // Write your code here
//  int    length= strlen(input);
//     int k=0;
//     for ( int i=0; i<length;i++){
        
        
//         if (input[i]!=c){
         
//              input[k]=input[i];
//             k++;
//         }
        
    
//     }
// input[k] = '\0'; 
// }


// Highest Occuring Character
// Send Feedback
// For a given a string(str), find and return the highest occurring character.
// Example:
// Input String: "abcdeapapqarr"
// Expected Output: 'a'
// Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
// If there are two characters in the input string with the same frequency, return the character which comes first.
// Consider:
// Assume all the characters in the given string to be in lowercase always.
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces.
// Output Format:
// The only line of output prints the updated string. 
// Note:
// You are not required to print anything explicitly. It has already been taken care of.
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1:
// abdefgbabfba
// Sample Output 1:
// b
// Sample Input 2:
// xy
// Sample Output 2:
// x


// #include <iostream>
// #include <cstring>
// using namespace std;

// #include "solution.h"

// int main() {
//     int size = 1e6;
//     char str[size];
//     cin >> str;
//     cout << highestOccurringChar(str);
// }

// //char highestOccurringChar(char input[])// {
//     // Write your code here
// //
// char highestOccurringChar(char str[]) {
//   int freq[26] = { 0 };
//     int max = -1;
//     char result;
//     int len = strlen(str);

//     for (int i = 0; i < len; i++)
//         freq[str[i] - 'a']++;
//     for (int i = 0; i < 26; i++)
//         if (max < freq[i]) {
//             max = freq[i];
//             result = (char)(i + 'a');
//         }	
//     return result;
   
// }



// Compress the String
// Send Feedback
// Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
// Example:
// If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

// The string is compressed only when the repeated character count is more than 1.
// Note:
// Consecutive count of every character in the input string is less than or equal to 9.
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces.
// Output Format:
// The output contains the string after compression printed in single line.
// Note:
// You are not required to print anything. It has already been taken care of. Just implement the given function.
// Constraints:
// 0 <= N <= 10^6

// Where 'N' is the length of the input string.

// Time Limit: 1 sec
// Sample Input 1:
// aaabbccdsa
// Sample Output 1:
// a3b2c2dsa
// Explanation for Sample Output 1:
// In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a' and occuring 1 time hence no compression for last 3 characters.
// Sample Input 2:
// aaabbcddeeeee
// Sample Output 2:
// a3b2cd2e5
// Explanation for Sample Output 2:
// In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is occuring single time, 'd' is repeating 2 times and 'e' is repeating 5times.



// #include <iostream>
// #include <cstring>
// #include<string>
// using namespace std;

// #include "solution.h"

// int main() {
//     int size = 1e6;
//     string str;
//     cin >> str;
//     str = getCompressedString(str);
//     cout << str << endl;
// }



// string getCompressedString(string &input) {
//     if(input.length() == 0){
//         return "";
//     }
//     int si=0;
//     int ei=0;
//     string result="";
//     while(si<input.length()){
//         while((ei<input.length()) && (input[ei] == input[si])){
//             ei++;
//         }
//         int totalcharcount=ei-si;
//         if(totalcharcount!=1){
//             result+=input[si];
//             result+=(char)(totalcharcount+'0');
//         }
//         else{
//             result+=input[si];
//         }
//         si=ei;
//     }
//     return result;
//     // Write your code here.
// }
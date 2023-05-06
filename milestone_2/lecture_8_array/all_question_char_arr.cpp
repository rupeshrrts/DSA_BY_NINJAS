// Check Palindrome
// Send Feedback
// Given a string, determine if it is a palindrome, considering only alphanumeric characters.
// Palindrome
// A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
// Example:
// If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

// The expected output for this example will print, 'true'.
// From that being said, you are required to return a boolean value from the function that has been asked to implement.
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
// Output Format:
// The only line of output prints either 'true' or 'false'.
// Note:
// You are not required to print anything. It has already been taken care of.
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second
// Sample Input 1 :
// abcdcba
// Sample Output 1 :
// true 
// Sample Input 2:
// coding
// Sample Output 2:
// false






// int length(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// bool checkPalindrome(char str[]) {
   
//     // Write your code here
//     for(int i=0;i<=length(str)/2;i++){
//         if(str[i]!=str[length(str)-1-i]){
//             return false;
//         }
//     }
//     return true;
   
// }


// Replace Character
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


// #include <iostream>
// #include <cstring>
// using namespace std;


// // #include "solution.h"

// void replaceCharacter(char input[], char c1, char c2) {
//     // Write your code here
//     for(int i=0;input[i]!='\0';i++){
//         if(c1==input[i]){
//             input[i]=c2;
            
//         }
//     }
// }

// int main() {
//     char input[1000000];
//     char c1, c2;
//     cin >> input;
//     cin >> c1 >> c2;
//     replaceCharacter(input, c1, c2);
//     cout << input << endl;
// }


// Trim Spaces
// Send Feedback
// Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
// There can be multiple spaces present after any word.
// Input Format :
//  String S
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of string S <= 10^6
// Sample Input :
// abc def g hi
// Sample Output :
// abcdefghi


// #include <iostream>
// #include <cstring>
// using namespace std;

// #include "solution.h"

// int main() {
//     char input[1000000];
//     cin.getline(input, 1000000);
//     trimSpaces(input);
//     cout << input << endl;
// }


// void trimSpaces(char a[]) {
//     // Write your code here
//     int count=0,i;
//     for(i=0;a[i];i++)
//         if(a[i]!=' ')
//         	a[count++]=a[i];
            
    
//     a[count]='\0';
// }



// Reverse Word Wise
// Send Feedback
// Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
// Input format :
// String in a single line
// Output format :
// Word wise reversed string in a single line
// Constraints :
// 0 <= |S| <= 10^7
// where |S| represents the length of string, S.
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// Ninjas Coding to Welcome
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// code your indent Always



// int length(char input[]){
//     int cnt=0;
//     for(int i=0;input[i]!='\0';i++){
//         cnt++;
//     }
//     return cnt;
// }

// void reverseStringWordWise(char input[]) {
//     // Write your code here
//     int i=0;
//     int j=length(input)-1;
//     while(i<=j){
//         char temp=input[i];
//         input[i]=input[j];
//         input[j]=temp;
//         i++;
//         j--;
//     }
//        int wordstart = 0;
//     int wordend = 0;
//     int len = length(input);
//     for(int i = 0 ; i<=len ; i++){
        
//         if(input[i] != ' ' && input[i] != '\0'){
//             wordend++;
//         }
        
//         if(input[i] == ' ' || input[i] == '\0'){
//             wordend--;
            
//             while(wordstart < wordend){
                
//                 char temp = input[wordstart];
//                 input[wordstart] = input[wordend];
//                 input[wordend] = temp;
//                 wordstart++;
//                 wordend--;
//             }
//             wordstart = i+1;
//             wordend = i+1;
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

// #include <iostream>
// #include <cstring>
// using namespace std;

// // #include "solution.h"

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


// int main() {
//     int size = 1e6;
//     char str[size];
//     cin >> str;
//     printSubstrings(str);
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a[100][100];
//     int m,n;
//     cin>>m>>n;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     //row wise
//     cout<<"Row wise"<<endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //column wise
//     cout<<"Column wise"<<endl;
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// //COLUMN WISE SUN
// #include<iostream>
// using namespace std;

// int main(){
//     int a[100][100];
//     int m,n;
//     cin>>m>>n;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
    
//     //column wise
//     cout<<"Column wise"<<endl;
//     for (int j = 0; j < n; j++)
//     {
//         int sum=0;
//         for (int i = 0; i < n; i++)
//         {
//             sum+=a[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// void printArray(int a[][100],int m,int n){
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int a[100][100];
//     int m,n;
//     cin>>m>>n;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     printArray(a,m,n);
// }




// #include<iostream>
// using namespace std;
// void printArray(int a[][5],int m,int n){
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int a[][5]={{1,2},{3,4}};
//     printArray(a,2,5);
    
// }





#include<iostream>
using namespace std;
void printArray(int a[][2],int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a[][2]={{1,2},{3,4}};
    printArray(a,2,2);
    
}

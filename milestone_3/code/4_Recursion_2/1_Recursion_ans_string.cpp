// #include <iostream>
// using namespace std;

// void removeX(char s[]) {
// 	if (s[0] == '\0') {
// 		return;
// 	}

// 	if (s[0] != 'x') {
// 		removeX(s + 1);
// 	} else {
// 		int i = 1;
// 		for (; s[i] != '\0'; i++) {
// 			s[i - 1] = s[i];
// 		}
// 		s[i - 1] = s[i];
// 		removeX(s);
// 	}
// }

// int length(char s[]) {
// 	if (s[0] == '\0') {
// 		return 0;
// 	}
// 	int smallStringLength = length(s + 1);
// 	return 1 + smallStringLength;
// }

// int main() {
// 	char str[100];
// 	cin >> str;

// 	int l = length(str);
// 	cout << l << endl;
// 	removeX(str);
// 	cout << str << endl;
// 	l = length(str);
// 	cout << l << endl;
// }

// question
// Replace Character Recursively
// Send Feedback
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of String S <= 10^6
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd

// #include <iostream>
// using namespace std;
// // #include "Solution.h"
// void replaceCharacter(char input[], char c1, char c2) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * No need to print or return the output.
//      * Change in the given input string itself.
//      * Taking input and printing output is handled automatically.
//      */
//     if(input[0]=='\0'){
//         return;
//     }
//     if(input[0]==c1){
//         input[0]=c2;
//     }
//     replaceCharacter(input+1,c1, c2);
// }
// int main() {
//     char input[1000000];
//     char c1, c2;
//     cin >> input;
//     cin >> c1 >> c2;
//     replaceCharacter(input, c1, c2);
//     cout << input << endl;
// }

// Remove Duplicates Recursively
// Send Feedback
// Given a string S, remove consecutive duplicates from it recursively.
// Input Format :
// String S
// Output Format :
// Output string
// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string
// Sample Input 1 :
// aabccba
// Sample Output 1 :
// abcba
// Sample Input 2 :
// xxxyyyzwwzzz
// Sample Output 2 :
// xyzwz

#include <iostream>
using namespace std;
// #include "solution.h"

void removeConsecutiveDuplicates(char *input)
{
    
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] != input[1])
    {
        removeConsecutiveDuplicates(input + 1);
    }

    else
    {

        int i = 1;
        for (; input[i] != '\0'; i++)
        {

            input[i - 1] = input[i];
        }

        input[i - 1] = input[i];

        removeConsecutiveDuplicates(input);
    }
}
int main()
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
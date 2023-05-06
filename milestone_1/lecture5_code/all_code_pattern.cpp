// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }

//         int star=1;
//         while (star<=i)
//         {
//             cout<<"*";
//             star=star+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// Code : Mirror Number Pattern
// Send Feedback
// Print the following pattern for the given N number of rows.
// Pattern for N = 4

// The dots represent spaces.

// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 50
// Sample Input 1:
// 3
// Sample Output 1:
//       1
//     12
//   123
// Sample Input 2:
// 4
// Sample Output 2:
//       1
//     12
//   123
// 1234

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }

//         int j=1;
//         while (j<=i)
//         {
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int star=1;
//         while (star<=n-i+1)
//         {
//             cout<<"*";
//             star+=1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int star=1;
//         while (star<=n-i+1)
//         {
//             cout<<star;
//             star+=1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// Code : Inverted Number Pattern
// Send Feedback
// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
// 55555
// 4444
// 333
// 22
// 1
// Sample Input 2:
// 6
// Sample Output 2:
// 666666
// 55555
// 4444
// 333
// 22
// 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << n-i+1;
//             j += 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }

//         int j=1;
//         while (j<=i)
//         {
//             cout<<j;
//             j=j+1;
//         }

//         j=i-1;
//         while (j>=1)
//         {
//             cout<<j;
//             j=j-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// Code : Star Pattern
// Send Feedback
// Print the following pattern
// Pattern for N = 4

// The dots represent spaces.

// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   ***
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    ***
//   *****
//  *******

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = 1;
//         while (space <= n - i)
//         {
//             cout << " ";
//             space += 1;
//         }

//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j = j + 1;
//         }

//         j = i - 1;
//         while (j >= 1)
//         {
//             cout << "*";
//             j = j - 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// Code : Triangle of Numbers
// Send Feedback
// Print the following pattern for the given number of rows.
// Pattern for N = 4

// The dots represent spaces.

// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
//            1
//          232
//        34543
//      4567654
//    567898765
// Sample Input 2:
// 4
// Sample Output 2:
//         1
//        232
//       34543
//      4567654

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = 1;
//         while (space <= n - i)
//         {
//             cout << " ";
//             space += 1;
//         }

//         int j = 1;
//         while (j <= i)
//         {
//             cout << i + j - 1;
//             j = j + 1;
//         }
//         j = i - 1;
//         int count = 2 * j;
//         while (j >= 1)
//         {
//             cout << count;
//             j--;
//             count--;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }



// Code : Diamond of stars
// Send Feedback
// Print the following pattern for the given number of rows.
// Note: N is always odd.

// Pattern for N = 5

// The dots represent spaces.

// Input format :
// N (Total no. of rows and can only be odd)
// Output format :
// Pattern in N lines
// Constraints :
// 1 <= N <= 49
// Sample Input 1:
// 5
// Sample Output 1:
//   *
//  ***
// *****
//  ***
//   *
// Sample Input 2:
// 3
// Sample Output 2:
//   *
//  ***
//   *


#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
    while (i<=(N+1)/2)
    {
        for(int j=i;j<=N/2;j++)
            cout<<" ";
        for(int k=1;k<=i;k++)
            cout<<"*";
        for(int l=1;l<i;l++)
            cout<<"*";

        cout<<endl;
        i++;
    }
    
    for(int i=1;i<=N/2;i++){
        for(int j=1;j<=i;j++)
            cout<<" ";
        for(int k=i;k<=N/2;k++)
            cout<<"*";
        for(int l=i;l<N/2;l++)
            cout<<"*";
        cout<<endl;
    }
}

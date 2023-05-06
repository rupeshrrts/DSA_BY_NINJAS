// multidimention array

// #include<iostream>
// using namespace std;

// int main(){

//    int** p= new int*[10];
//    for (int i = 0; i < 10; i++)
//    {
//     p[i]=new int[20];
//    }

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> m >> n;
//     int **p = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         p[i] = new int[n+1];//p[i] = new int[n];
//         cout<<"Enter the num"<<endl;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> p[i][j];
//         }
//     }
//     for (int i = 0; i < m; i++)//safai krne ke liye
//     {
//         delete [] p[i];
//     }
     
//     delete []p;
// }


// Delete 2D array
// Send Feedback
// Given the following CPP Program. Select the CORRECT Syntax of deleting this 2D array? Check all that apply.
#include <iostream>
using namespace std;

int main()
{
    int **twoDArray = new int*[10];
    for(int i = 0; i < 10; i++)
        *(twoDArray + i) = new int[10];
}
// Options are -
// A. 
// delete twoDArray [][];

// B.
// for(int i = 0; i < 10; i++)
//     delete twoDArray[i];
//     delete twoDArray[];

// C.
// for(int i = 0; i < 10; i++)
//     delete [] twoDArray[i];
//     delete[] twoDArray;

// D.
// for(int i = 0; i < 10; i++)
//     delete twoDArray[i][];
//     delete[] twoDArray;
// #include<iostream>
// using namespace std;

// int main(){
//     int* p=new int;
//     *p=10;
//     cout<<*p<<endl;

//     double* pd = new double;
//     char* c= new char;
//     int* pa = new int[50];

//     ///
//     int n;
//     cout<<"Enter the num. of elements "<<endl;
//     cin>>n;
//     int* pa2=new int[n];
//     // pa2[0]=10;//0th element same as array
//     for (int i = 0; i < n; i++)
//     {
//         cin>>pa2[i];
//     }

//     int max=-1;
//     for (int i = 0; i < n; i++)
//     {
//         if (max<pa2[i])
//         {
//             max=pa2[i];
//         }
        
//     }
//     cout<<max<<endl;
// }


// //static allocation
// #include<iostream>
// using namespace std;

// int main(){
//     while (true)
//     {
//         int i=10;
//     cout<<i<<endl;  
//     }  
// }


// //Dynamic allocation me delete krna padega
// #include<iostream>
// using namespace std;

// int main(){
//     while (true)
//     {
//         int* p = new int;
//         *p=10;
//         cout<<*p<<endl;
//     }  
// }


// //Dynamic allocation me delete krna padega

// #include<iostream>
// using namespace std;

// int main(){
//     int* p=new int;
//     delete p;//memory saff krna hai

//     p=new int;
//     delete p;//memory saff krna hai

//     p=new int[100];
//     delete []p;//memory saff krna hai
// }


// 1
// // Questions
// In CPP, dynamic memory allocation is done using ______________ operator.

// This problem has only one correct answer
// calloc()
// malloc()
// allocate
// new
// Hurray! Correct Answer



// 2
// Deallocate memory
// Send Feedback
// How will you free the memory allocated by following program -
// #include <iostream>
// using namespace std;    

// int main() {
//     int *a = new int;
// }

// This problem has only one correct answer
// free a;
// delete *a;
// delete a;
// new a;
// Hurray! Correct Answer


// // 3
// Deallocate memory

// #include <iostream>
// using namespace std;    

// int main() {
//     int *a = new int;
// }

// This problem has only one correct answer
// free a;
// delete *a;
// delete a;
// new a;
// Hurray! Correct Answer



// 4
// Create array
// Send Feedback
// Correct statement for creating an integer array of size 5, dynamically -
// You have max 2 attempts to score in this question.
// Attempts left:
// 1/2
// Options
// This problem has only one correct answer
// int *arr[] = new int[5];
// int *arr = new int[5];
// int arr = new int[5];
// int *arr[5] = new int;
// Hurray! Correct Answer



// // 5
// Deallocate array
// Send Feedback

// This problem has only one correct answer
// delete [] arr;
// delete arr;
// delete *arr;
// delete [] *arr;
// Hurray! Correct Answer


// 6Delete memory

// This problem has only one correct answer
// NULL
// Other dynamically allocated memory
// The same deleted memory location
// It points back to location it was initialized with
// Hurray! Correct Answer


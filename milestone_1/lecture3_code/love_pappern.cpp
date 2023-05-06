// #include<iostream>
// using namespace std;

// int main(){
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 5; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // outerloop
//     for (int row = 0; row < 3; row++)
//     {
//         if (row == 0 || row == 2)
//         {
//             for (int col = 0; col < 5; col++)
//             {
//                 cout << "*";
//             }
//         }
//         else
//         {
//             cout << "*";
//             // remming middle rows
//             for (int i = 0; i < 3; i++)
//             {
//                 cout << " ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // outerloop
//     for (int row = 0; row < 6; row++)
//     {
//         if (row == 0 || row == 5)
//         {
//             for (int col = 0; col < 5; col++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             cout << "* ";
//             // remming middle rows
//             for (int i = 0; i < 3; i++)
//             {
//                 cout << "  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rowCount;
//     int colCount;
//     cin >> rowCount;
//     cin >> colCount;
//     // outerloop
//     for (int row = 0; row < rowCount; row++)
//     {
//         if (row == 0 || row == rowCount - 1)
//         {
//             for (int col = 0; col < colCount; col++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             cout << "* ";
//             // remming middle rows
//             for (int i = 0; i < colCount - 2; i++)
//             {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // Half piramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col <=row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // inverted Half piramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col <n-row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // numeric Half piramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col <row+1; col++)
//         {
//             cout<<col+1;
//         }
//         cout<<endl;
//     }
// }

// // inverted Half piramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col <n-row; col++)
//         {
//             cout<<col+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// // full  piramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         //space
//         for (int col = 0; col <n-row-1; col++)
//         {
//             cout<<" ";
//         }
//         //stars
//         for (int col = 0; col <row+1; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// // inverted  piramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         //space
//         for (int col = 0; col <row; col++)
//         {
//             cout<<" ";
//         }
//         //stars
//         for (int col = 0; col <n-row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//  piramid
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     // full piramid
//     for (int row = 0; row < n; row++)
//     {
//         // space
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         // space
//         for (int col = 0; col < row; col++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// //  piramid
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     // full piramid
//     for (int row = 0; row < n; row++)
//     {
//         // space
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int col = 0; col < 2 * row + 1; col++)
//             // if first char or last char
//             if (col == 0||col == 2 * row)
//             {
//                 cout <<"*";
//             }
//             else
//         {
//             cout<< " ";
//         }
//         cout << endl;

//     }
//     for (int  row = 0; row < n; row++)
//     {
//         // spaces
//         for (int col = 0; col < row; col++)
//         {
//             cout<<" ";
//         }

//         //stars
//         for (int col = 0; col < 2*n-2*row-1; col++)
//         {
//             if (col==0||col==2*n-2*row-2)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
        
        
//     }
    
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         // half piramid stars
//         for (int col = 0; col <n-row; col++)
//         {
//             cout<<"*";
//         }
//         //space wala full pyramid
//         for (int col = 0; col <2*row+1; col++)
//         {
//             cout<<" ";
//         }
//         for (int col = 0; col <n-row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for (int row = 0; row < n; row++)
//     {
//         //stars
//         for (int col = 0; col <row+1; col++)
//         {
//             cout<<"*";
//         }
//         //space wala full pyramid
//         for (int col = 0; col <2*n-2*row-1; col++)
//         {
//             cout<<" ";
//         }
//         for (int col = 0; col <row+1; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// //fancy pattern
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         // half piramid stars
//         for (int col = 0; col <row+1; col++)
//         {
//             cout<<row+1;
//             if (col!=row)
//             {
//                 cout<<"*";
//             }
            
//         }
//         cout<<endl;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         // half piramid stars
//         for (int col = 0; col <n-row; col++)
//         {
//             cout<<n-row;
//             if (col!=n-row-1)
//             {
//                 cout<<"*";
//             }
            
//         }
//         cout<<endl;
//     }
// }




// //fancy pattern
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int row = 0; row < n; row++)
//     {
//         int col;
//         for (int col = 0; col <row+1; col++)
//         {
//             cout<<col+1;
//         }
//         //reverse counting printing
//         for (int col = row; col >=1; col--)
//         {
//             cout<<col;
//         }

//         cout<<endl;
//     }    
// }



//fancy pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        
        for (int col = 0; col <row+1; col++)
        {
            int ans = col+1;
            char ch= ans+'A'-1;
            cout<<ch;
        }
        //reverse counting printing
        for (int col = row; col >=1; col--)
        {   int ans = col;
            char ch= ans+'A'-1;
            cout<<ch;
        }

        cout<<endl;
    }    
}

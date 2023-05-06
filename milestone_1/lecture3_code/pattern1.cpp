// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;

//     while (i<=n)
//     {
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

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the n ";
//     cin >> n;
//     int i = 1;
//     int val = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << val;
//             val += 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the n ";
//     cin >> n;
//     int i = 1;
//     int val = 1;

//     while (i <= n)
//     {
//         int space =1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }
//         int j=1;
//         while (j <= i)
//         {
//             cout << val;
//             val += 1;
//             j = j + 1;
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
//         int space =1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }
//         int j=1;
//         while (j<=(2*i-1))
//         {
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


#include <iostream>
using namespace std;
int main(){
    int N;
        cin>>N;

    for(int i=1;i<=(N+1)/2;i++){
        for(int j=i;j<=N/2;j++)
            cout<<" ";
        for(int k=1;k<=i;k++)
            cout<<"*";
        for(int l=1;l<i;l++)
            cout<<"*";
        cout<<endl;
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


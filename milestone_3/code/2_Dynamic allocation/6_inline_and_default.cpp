//  #include<iostream>
//  using namespace std;

//  int main(){
//     // int a,b;
//     // cin>>a>>b;
//     // int c;
//     // if (a>b)
//     // {
//     //     c=a;
//     // }
//     // else{
//     //     c=b;
//     // }
//     // cout<<"Max "<<c;
// // or,
//     //also we can write
//     // int c=(a>b)? a:b;
//     // cout<<"Max "<<c;
//     int x,y;
//     x=10;
//     y=13;
//     int z=(x>y)? x:y;
//     cout<<"Max "<<z;

//  }


// use inline ye kam bahut km time me hi ho jata hai samajh me nhi aata hai
// #include <iostream>
// using namespace std;
// inline int max(int a, int b)
// {
//     return (a > b) ? a : b;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int c = max(a, b);
//     cout<<"Max "<<c<<endl;;

//     int x,y;
//     x=10;
//     y=13;
//     int z = max(x, y);
//     cout<<"Max "<<z<<endl;

// }

// #include<iostream>
// using namespace std;
// int sum(int a[],int size,int si=0){
//     int ans=0;
//     for (int i = si; i < size; i++)
//     {
//         ans+=a[i];
//     }
//     return ans;
// }

// int sum2(int a,int b,int c=0,int d=0){
//     return a+b+c+d;
// }

// int main(){
//     int a[20];
//     cout<<sum(a,7)<<endl;;
//     cout<<sum2(2,3);

// }


// Question
#include<iostream>
using namespace std;

int getValue(int x = 0, int y = 0, int z){  
    return (x + y + z); 
}

int main(){
   cout << getValue(10);
   return 0;
}
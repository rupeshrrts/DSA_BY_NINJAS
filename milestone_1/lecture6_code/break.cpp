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
//         while (j <= n)
//         {
//             cout << j;
//             j++;

//             if (j > i)
//             {
//                 break;
//             }
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i = 1;
//     while (i <= 10)
//     {
//         if (i==7)
//         {
//             i++;
//             continue;
//         }
//         cout<<i;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//   char n;
//   // cin>>n;
//   n=cin.get();
//   int count=0;
//   while (n!='$')
//   { count++;
//     n=cin.get();
//   }
//   cout<<count;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int rev = 0;
//   int i = 0;
//   while (n != 0)
//   {
//     int digit = n % 10;
//     rev = rev * 10 + digit;
//     i++;
//     n = n / 10;
//   }
//   cout << rev;
// }



#include <iostream>
using namespace std;
bool checkMember(int n)
{
    if(n==0||n==1){
        return true;
    }
    int n1=0;
    int n2=1;
    int i=2;
    int n3=1;
    while (i<=1000)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n3==n){
			return true;
        }
        i++;
    }
    return false;
}

int main() {
    int a;
    cin>>a;
    cout<<checkMember(a)<<endl;;
}

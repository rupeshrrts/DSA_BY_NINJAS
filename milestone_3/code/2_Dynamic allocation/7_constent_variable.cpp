// #include<iostream>
// using namespace std;

// int main(){
//     int i=10;
//     i=12;
//     cout<<i<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     const int i=10;//cant be change i
//     // i=12;
//     cout<<i<<endl;
// } 

// #include<iostream>
// using namespace std;

// int main(){
//     int const i=10;
//     int j=12;
//     const int &k=j;
//     j++;
//     cout<<j<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int const i=10;
//     int const i2=10;

//     //constant reference from a non const int 
//     int j=12;
//     const int &k=j;
//     j++;
//     cout<<j<<endl;

//     //constant reference from a  const int 
//     int const j2 = 12;
//     int const &k2 = j2;

//     // reference from a const int
//     int const j3=123;
//     int &k3=j3;
//     k3++;
// }




// #include<iostream>
// using namespace std;
// void g(int const & a){
//     a++;
// }
// void f(const int * p){
//     // (*p)++;
// }
// int main(){ 
//     int const i=10;
//     int const * p= &i;
//     // (*p)++; //not alloud

//     int j=12;
//     int *p3=&j;
//     f(p3);
//     g(j);
//     int const * p2=&j;
//     cout<<*p2<<endl;
//     j++;
//     cout<<*p2<<endl;
// }


// Questions
// #include <iostream>
// using namespace std;

// int main(){
//     int  const  p = 5;
//     cout << ++p;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const *q = &p;
//     p++;
//     cout << p << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const *q = &p;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int * const q = &p;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const * const q = &p;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     const int p = 5;
//     int const *q = &p;
// }


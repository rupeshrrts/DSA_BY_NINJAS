// class Student {
//     public :

//     const int rollNumber;
//     int age;

// };


// int main() {
//     Student s1;
//     s1.rollNumber = 101;
//     s1.age = 20;

//     cout << s1.rollNumber << " " << s1.age;

// }


// class Student {
//     public :

//     const int rollNumber;
//     int age;

//     Student(int r, int a) : rollNumber(r), age(a) {
//     }
// };


// int main() {
//     Student s1(100, 23);
//     cout<< s1.rollNumber << " " << s1.age;
// }

// class Student {
//     public :

//     const int rollNumber;
//     int age;

//     int &x;

//     Student(int r, int a) : rollNumber(r), age(a) {
//     }
// };


// int main() {
//     Student s1(100, 23);
//     s1.x = age;
//     cout << s1.rollNumber << " " << s1.age << " " << s1.x;
// }

#include<iostream>
using namespace std;
class Student {
    public :

    int rollNumber;
    int age;

};


int main() {
    Student s1;

    Student const s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s2.rollNumber << " " << s2.age;
}
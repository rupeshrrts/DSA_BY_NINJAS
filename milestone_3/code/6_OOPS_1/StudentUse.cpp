// #include <iostream>
// using namespace std;
// // #include "Student.cpp"
// class Student {
// 	public:
// 	int rollNumber;
// 	int age;
// };

// int main() {
// 	// Create objects statically
// 	Student s1;
// 	Student s2;

// 	Student s3, s4, s5;

// 	s1.age = 24;
// 	s1.rollNumber = 101;

// 	cout << s1.age << endl;
// 	cout << s1.rollNumber << endl;

// 	s2.age = 30;


// 	// Create objects dynamicaaly
// 	Student *s6 = new Student;
// 	(*s6).age = 23;
// 	(*s6).rollNumber = 104;

// 	s6 -> age = 23;
// 	s6 -> rollNumber = 104;

// }


// int main() {
// 	// Create objects statically
// 	Student s1;
// 	Student s2;

// 	Student s3, s4, s5;

// 	// s1.age = 24;
// 	s1.rollNumber = 101;

// 	cout << "S1 age : " << s1.getAge() << endl;
// 	cout << "S1 Roll number : " << s1.rollNumber << endl;

// 	s1.display();
// 	s2.display();


// 	//s2.age = 30;
// 	// Create objects dynamicaaly
// 	Student *s6 = new Student;
// 	//(*s6).age = 23;
// 	(*s6).rollNumber = 104;

// 	(*s6).display();

// 	cout << "S6 age : " << s6 -> getAge() << endl;

// 	//s6 -> age = 23;
// 	s6 -> rollNumber = 104;
// 	s6 -> display();

// }

// #include <iostream>
// using namespace std;

// class Student{
//     public :
//     char *name;
//     int rollNo;
//     Student(int num){
//         rollNo = num;
//     }

//     void print(){
//         cout << rollNo;
//     }
// };

// int main() {
//     Student s(12);
//     s.print();
// }


#include <iostream>
using namespace std;

class Student{
    public :
    char name;
    int rollNo;

    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << name << " "  <<  rollNo;
    }
};

int main() {
    Student *s = new Student();
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
}

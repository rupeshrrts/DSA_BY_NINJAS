// //Encapsulation
// #include<iostream>
// using namespace std;
// class Animal{
//     private:
//     int age;
//     int weight;
//     public:
//     void eat(){
//         cout<<"Eatting"<<endl;
//     }

//     int getAge(){
//         return this->age;

//     }

//     void setAge(int age){
//         this->age=age;
//     }

// };

// int main(){
//     cout<<"Hello"<<endl;
//     return 0;
// }

// // Inheritance
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     int age;
//     int weight;

//     void eat()
//     {
//         cout<<"Eatting"<<endl;
//     }
// };

// class Dog: public Animal{

// };
// int main()
// {
//     Dog d1;
//     d1.eat();
// }

// trial of mode of access modifier

// 1. public
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     int age;

// };

// class Dog: public Animal{
// };

// int main()
// {
//     Dog d1;
//     cout<<d1.age<<endl;
// }

// // 2.
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     int age;

// };

// class Dog: protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     d1.print();
// }

// // 3.
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     int age;

// };

// class Dog: private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     d1.print(); // it is in class
//     d1.age;// not accesable  it is outsidenthe class
// }

// // 1. protected
// #include <iostream>
// using namespace std;
// class Animal
// {
// protected:
//     int age;

// };

// class Dog: public Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     // cout<<d1.age;// not accesable  it is outsidenthe class
//     d1.print(); // inside access
// }

// // 2.
// #include <iostream>
// using namespace std;
// class Animal
// {
// protected:
//     int age;

// };

// class Dog: protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     // cout<<d1.age;// not accesable  it is outsidenthe class
//     d1.print(); // inside access
// }

// // 3.
// #include <iostream>
// using namespace std;
// class Animal
// {
// protected:
//     int age;

// };

// class Dog: private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     // cout<<d1.age;// not accesable  it is outsidenthe class
//     d1.print(); // inside access
// }

// // 1. private
// #include <iostream>
// using namespace std;
// class Animal
// {
// private:
//     int age;

// };

// class Dog: public Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     // cout<<d1.age;// not accesable  it is outsidenthe class
//     d1.print(); // inside access
// }

// // 2.
// #include <iostream>
// using namespace std;
// class Animal
// {
// private:
//     int age;

// };

// class Dog: protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     // cout<<d1.age;// not accesable  it is outsidenthe class
//     d1.print(); // inside access
// }

// // 3.
// #include <iostream>
// using namespace std;
// class Animal
// {
// private:
//     int age;

// };

// class Dog: private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     // cout<<d1.age;// not accesable  it is outsidenthe class
//     d1.print(); // inside access
// }

// types of inheritance

// // 1. single Inheritance
// #include <iostream>
// using namespace std;
// class Car
// {
// public:
//     string name;
//     int weight;
//     int age;

//     void speedUp(){
//         cout<<"Speeding Up"<<endl;
//     }
//     void breakMarro(){
//         cout<<" break maardi"<<endl;
//     }

// };

// class Scorpoi : public Car// scorpio is a car
// {

// };

// int main()
// {
//    Scorpoi rkwali;
//    rkwali.speedUp();
// }

// // 2. miti-level Inheritance
// #include <iostream>
// using namespace std;
// class Fruit
// {
// public:
//     string name;

// };

// class Mango : public Fruit
// {
//     public:
//     int weight;

// };

// class Alphanso : public Mango
// {
//     public:
//     int sugarLevel;

// };

// int main()
// {
//    Alphanso a;
//    cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;

// }

// // 3. miti-level Inheritance
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     public:
//     int physics;
// };

// class B
// {
// public:
//     int chemistry;
// };

// class C: public A,public B{
//     public:
//     int maths;
// };

// int main()
// {
//     C obj;

//     cout<<obj.physics<<" "<<obj.maths<<" "<<endl;

// }

// // 3. Dimond problem in miti-level Inheritance
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     public:
//     int chemistry;
//     A(){
//         chemistry=23;
//     }
// };

// class B
// {
// public:
//     int chemistry;
//     B(){
//         chemistry=24;
//     }
// };

// class C: public A,public B{
//     public:
//     int maths;
//     C(){
//         maths=45;
//     }
// };

// int main()
// {
//     C obj;

//     cout<<obj.A::chemistry<<" "<<obj.B::chemistry<<" "<<obj.maths<<" "<<endl;

// }

// // 3. Dimond problem in miti-level Inheritance
// #include <iostream>
// using namespace std;
// class Car
// {
// public:
//     int age;
//    int weight;
//    string name;

//    void speedUp(){
//     cout<<" Speeding Up"<<endl;
//    }
// };

// class Scorpio: public Car
// {

// };

// class Fortuner: public Car
// {

// };

// int main()
// {
//     Scorpio s11;
//     s11.speedUp();

//     Fortuner f11;
//     s11.speedUp();
// }

// // 3. function overloading
// #include <iostream>
// using namespace std;
// class Maths
// {
// public:
//     int SUM(int a, int b)
//     {
//         cout << "I am in first signature" << endl;
//         return a + b;
//     }

//     int SUM(int a, int b, int c)
//     {
//         cout << "I am in second signature" << endl;

//         return a + b + c;
//     }

//     int SUM(int a, float c)
//     {
//         cout << "I am in third signature" << endl;

//         return a + c + 10;
//     }

// };

// int main()
// {
//     Maths obj;
//     cout << obj.SUM(2, 3)<<endl;
//     cout << obj.SUM(2, 3, 4)<<endl;
//     cout<<obj.SUM(2,3.4f)<<endl;

// }

#include <iostream>
using namespace std;
class param
{
public:
    int val;

    void operator+(param obj2){
        int value1=this->val;
        int value2=obj2.val;
        cout<<(value2-value1)<<endl;


    }
};

int main()
{
    param obj1, obj2;
    obj1.val = 4;
    obj2.val = 7;

    obj1+obj2;
    //this should print diff them
}
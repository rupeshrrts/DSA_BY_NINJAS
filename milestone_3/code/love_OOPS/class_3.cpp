// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog:public Animal{
//     public:
//     // override
//      void speak(){
//         cout<<"barking"<<endl;
//     }

// };

// int main(){
//     // Dog a;
//     // a.speak();

//     // Animal* a=new Animal();
//     // a->speak();

// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog:public Animal{
//     public:
//     // override
//      void speak(){
//         cout<<"barking"<<endl;
//     }

// };

// int main(){
//     // Dog a;
//     // a.speak();

//     // Animal* a=new Animal();
//     // a->speak();

//     //Upcasting
//     Animal* a=new Dog();
//     a->speak();

// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog:public Animal{
//     public:
//     // override
//      void speak(){
//         cout<<"barking"<<endl;
//     }

// };

// int main(){
//     // Dog a;
//     // a.speak();

//     Animal* a=new Dog();
//     a->speak();

// //    Downcasting
//     Dog* b=(Dog*)new Animal();
//     b->speak();

// }

// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     Animal()
//     {
//         cout << "i am inside animal constructor" << endl;
//     }
//     virtual void speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     Dog()
//     {
//         cout << "i am inside Dog constructor" << endl;
//     }
//     // override
//     void speak()
//     {
//         cout << "barking" << endl;
//     }
// };

// int main()
// {
//     // Dog a;
//     // a.speak();

//     // Animal *a = new Dog();
//     // a->speak();

//     //    Downcasting
//     // Dog *b = (Dog *)new Animal();
//     // b->speak();

//     // Animal *b = new Animal();

//     // Dog *b = new Dog();

     
//     Dog *b = new Dog();
//     // Dog a;


// }


// Abstraction

// khud se kre



// DYNAMIC MEMORY ALLOCATION
 #include <iostream>
using namespace std;

int main() {
        int row = 5;
        int col = 3;

        int** arr = new int*[5];

        for(int i=0; i<row; i++) {
                arr[i] = new int[col];
        }

        //printing
        // for(int i=0; i<row; i++) {
        //         for(int j=0; j<col; j++) {
        //                 cout << arr[i][j] <<" ";
        //         }
        //         cout << endl;
        // }

        //de-allocate
        for(int i=0; i<row; i++) {
                delete []arr[i];
        }

        delete []arr;



  return 0;
}
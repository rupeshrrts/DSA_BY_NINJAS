// #include<iostream>
// using namespace std;
// class Animal{
//     int age;
//     int weight;
//     char ch;
// };

// int main(){
//     // read about padding and greedy allignment?
//     cout<<"Size of class "<<sizeof(Animal)<<endl;

// return 0;

// }

// #include <iostream>
// using namespace std;
// class Animal
// {
//     // state or properties
// private:
//     int weight;

// public:
//     int age;
//     string type;

//     // behaviour
//     void eat()
//     {
//         cout << "Eatting" << endl;
//     }
//     void sleep()
//     {
//         cout << "Sleeping" << endl;
//     }

//     int getWeight()
//     {
//         return weight;
//     }
//     void setWeight(int w)
//     {
//         weight = w;
//     }
// };

// int main()
// {
//     // object Creation

//     // static allocation
//     Animal ramesh;
//     ramesh.age = 12;
//     ramesh.type = "Lion";

//     // cout << "Age of ramesh :" << ramesh.age << endl;
//     // cout << "name of ramesh :" << ramesh.type << endl;
//     // // cout << "weight of ramesh :" << ramesh.weight  << endl;

//     ramesh.eat();
//     ramesh.sleep();

//     ramesh.setWeight(101);
//     cout << "name of ramesh :" << ramesh.getWeight() << endl;

//     // Dunamic memory allocation
//     Animal* suresh = new Animal;
//     (*suresh).age=15;
//     (*suresh).type="billi";

//     //alteter -dynamic
//     suresh->age=13;
//     suresh->type="baby";

//     suresh->eat();
//     suresh->sleep();

//     return 0;
// }

// this key word

// #include <iostream>
// using namespace std;
// class Animal
// {
//     // state or properties
// private:
//     int weight;

// public:
//     int age;
//     string type;

//     // behaviour
//     void eat()
//     {
//         cout << "Eatting" << endl;
//     }
//     void sleep()
//     {
//         cout << "Sleeping" << endl;
//     }

//     int getWeight()
//     {
//         return weight;
//     }
//     void setWeight(int weight)
//     {
//         this->weight = weight;
//         // (*this).weight = weight;

//     }
// };

// int main()
// {
//     // object Creation

//     // static allocation
//     Animal ramesh;
//     ramesh.age = 12;
//     ramesh.type = "Lion";

//     // cout << "Age of ramesh :" << ramesh.age << endl;
//     // cout << "name of ramesh :" << ramesh.type << endl;
//     // // cout << "weight of ramesh :" << ramesh.weight  << endl;

//     ramesh.eat();
//     ramesh.sleep();

//     ramesh.setWeight(101);
//     cout << "name of ramesh :" << ramesh.getWeight() << endl;

//     // Dunamic memory allocation
//     Animal* suresh = new Animal;
//     (*suresh).age=15;
//     (*suresh).type="billi";

//     //alteter -dynamic
//     suresh->age=13;
//     suresh->type="baby";

//     suresh->eat();
//     suresh->sleep();

//     return 0;
// }



// constructor

// #include <iostream>
// #include<string.h>
// using namespace std;
// class Animal
// {
//     // state or properties
// private:
//     int weight;

// public:
//     int age;
//     // string type;
//     char type[20];


    
//     // default constructor
//     Animal()
//     {
//         this->weight = 0;
//         this->age = 0;
//         // this->type = "";

//         cout << "Constructor Called" << endl;
//     }
//     // paramiterized constructor
//     // Animal(int age)
//     // {
//     //     this->age = age;
//     //     cout << "Paramiterized Constructor called" << endl;
//     // }

//     // // paramiterized 2 constructor
//     // Animal(int age, int weight)
//     // {
//     //     this->age = age;
//     //     this->weight = weight;
//     //     cout << "Paramiterized 2 called" << endl;
//     // }

//     // // paramiterized 3 constructor
//     // Animal(int age, int weight, string type)
//     // {
//     //     this->age = age;
//     //     this->weight = weight;
//     //     this->type = type;
//     //     cout << "Paramiterized 3 called" << endl;
//     // }
//     // copy constructor
//     // Animal(Animal &obj)
//     // {
//     //     this->age = obj.age;
//     //     this->weight = obj.weight;
//     //     this->type = obj.type;
//     //     cout << "copy constructor called" << endl;
//     // }
//     int getWeight()
//     {
//         return weight;
//     }
//     void setWeight(int weight)
//     {
//         this->weight = weight;
//         // (*this).weight = weight;
//     }


//     void print()
//     {
//         cout << this->age << " " << this->weight << " " << this->type << endl;
//     }
//     ~Animal(){
//         cout<<"I am in distructor"<<endl;
//     }
// };

// int main()
// {
//     // object Creation

//     // Animal a;
//     // Animal *b = new Animal();

//     // Animal a(10);
//     // Animal *d = new Animal(100);

//     // Animal c(10,2);
//     // Animal *d = new Animal(100,44);

//     // Animal c(10,2,"rupesh");
//     // Animal *d = new Animal(100,44,"kumar");

//     // Animal c=a;
//     // Animal e(*d);
//     // Animal c1(a);

//     Animal a;
//     // a.age = 29;
//     // a.setWeight(122);
//     // a.type = "bubber";

//     // Animal c = a;
//     // cout<<"a-> ";

//     // a.print();
//     // cout<<"b-> ";

//     // c.print();

//     // a.type[0]='G';
//     // cout<<"a-> ";

//     // a.print();
//     // cout<<"b-> ";

//     // c.print();
// cout<<"a obj creation"<<endl;
//     a.age=5;

// cout<<"b obj creation"<<endl;
// Animal* b= new Animal();

// //manually
// delete b;


//     return 0;
// }

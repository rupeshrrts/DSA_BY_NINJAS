#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> *vp = new vector<int>(); // Dynamic
    vector<int> v;                       // static
    
    for (int i = 0; i <100; i++)
    {
        cout<<"Cap : "<<v.capacity()<<endl;
        cout<<"Size : "<<v.size()<<endl;
        v.push_back(i+1);
    }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // v[2]=234;
    // // v[4]=23; dont use for insert element

    v.push_back(45);
    v.push_back(46);
    v.pop_back();

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // cout<<v[3]<<endl;
    // cout<<v[4]<<endl;
    // cout<<v[5]<<endl;
    // cout<<v[6]<<endl;
    // cout<<v.size()<<endl;

    // cout<<v.at(2)<<endl;
    // cout<<v.at(6)<<endl;
}
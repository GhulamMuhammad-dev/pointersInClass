#include<iostream>
#include<string>
using namespace std;

class Animal{
    private:
    string name;
    public:
    Animal(){};
    void setName(string na){
        name=na;
    }

    void getName(){
        cout<<name<<endl;
    }




};













int main(){
    Animal a1;
    Animal a2;

    Animal *const a3_ptr=&a1;
    // a3_ptr=&a2;
    a3_ptr->setName("dog");

    // a2.getName();
 

    cout<<a3_ptr<<endl;
    cout<<&a1<<endl;
    cout<<&a2<<endl;
   


    return 0;
}
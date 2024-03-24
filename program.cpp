// #include<iostream>
// #include<string>
// using namespace std;

// class Animal{
//     private:
//     string name;
//     public:
//     Animal(){};
//     void setName(string na){
//         name=na;
//     }

//     void getName(){
//         cout<<name<<endl;
//     }




// };













// int main(){
//     Animal a1;
//     Animal a5;
//     const Animal *a2=&a1;
//     Animal *const a3_ptr=&a1;
     
//    a2=&a5;
   
   




//     // a3_ptr=&a2;
//     a3_ptr->setName("dog");

//     // a2.getName();
 

//     cout<<a3_ptr<<endl;
//     cout<<&a1<<endl;
//     cout<<&a2<<endl;
   


//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;


class Staff{
    private:
    int * staff_salary;
    public:
    Staff(){};
    Staff(int staff_salary){
      this->staff_salary=new int(staff_salary);
    }

    void showSalary(){
        cout<<*staff_salary<<endl;
        cout<<staff_salary<<endl;
    }
   
   ~Staff(){
    delete staff_salary;
   }

};

int main(){

  Staff s1(200);
  s1.showSalary();
  s1.~Staff();




    return 0;
}
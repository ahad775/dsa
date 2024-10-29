#include<iostream>
#include<string>
using namespace std;



class Student{
    public:
   string name;
   int age;
   string email;
   Student(string name,string email,int age){
    this->name=name;
    this->email=email;
    this->age=age;
   }
};

int main(){

Student s1= Student("ahad","abc@gmail.com",34);


cout<<s1.name<<endl;
cout<<s1.age;



    return 0;
}
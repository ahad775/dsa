#include<iostream>
#include<string>
using namespace std;


class Student{
    public:
    string name;
    string roll_number;
    string email;
    int age;


Student(){
    (*this).name="happy";
    (*this).roll_number="bc34-02";
    (*this).email="happy@gmail.com";
    (*this).age=23;
};

/* Student(string name,string email,string rollnumber,int age){
    (*this).name=name;
    (*this).roll_number=rollnumber;
    (*this).email="happy@gmail.com";
    (*this).age=23;
}; */



Student(string name,string email,string rollnumber,int age):name(name),age(age),email(email),roll_number(rollnumber){};

void showDetails()
{

cout<<"Name is "<< name<<" age is " <<age<<" email is "<< email <<" roll number is "<<roll_number<<endl;

}
};



inline int add(int a,int b){
    return a+b;
}

int main(){



Student s1;
s1.showDetails();



Student s2("ahad","xyaz456789gmail.com","b2-ics-47",18);
s2.showDetails();

Student *s3=new Student;

(*s3).showDetails();

cout<<add(87,67);



return 0;




}
#include<iostream>
#include<string>



using namespace std;

class Student{
    public:
    string name;
    string rollNumber;
    int age;
};

int main(){


Student *s1=new Student;
s1->name="AHAD";
cout<<s1->name;





    return 0;
}



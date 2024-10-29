#include<iostream>
using namespace std;
#include<string>
class Student{
    public :
    string name;
    string roll_num;
    int age;

Student(string name,string r_num,int age){


this->age=age;
this->name=name;
this->roll_num=r_num;
}


Student(Student &param){

    roll_num=param.roll_num;
    name=param.name;
     age=param.age;

}



}
;

int main(){


Student *s1=new Student("ahad","ics-b2-047",18);


Student s2("talha","b2-047",20);
Student s3(s2);

cout<<"THe name of s2 is "<<s2.name<<endl;
cout<<"THe name of s2 is "<<(*s1).name<<endl;
cout<<"THe name of s3 is "<<s3.name<<endl;
s2.name="bheem";
cout<<"THe name of s2 after change  is "<<s2.name<<endl;
cout<<"THe name of  s3 after change is "<<s3.name<<endl;
    return 0;
}
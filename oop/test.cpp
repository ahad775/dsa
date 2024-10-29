#include<iostream>
#include<vector>
using namespace std;

class Animal {
    public:
    void show(){
        cout<<"hu hu\n";
    }
};


class Dog:public Animal {
public:
void show(){
    cout<<"Bark\n";
}
};
class Cat:public Animal {
public:
void show(){
    cout<<"meow\n";
}
};
int main(){
    
    vector<Animal*>animals;
    animals.push_back(new Dog);
    animals.push_back(new Animal);
    animals.push_back(new Dog);
    animals.push_back(new Cat);

    for (int i = 0; i < animals.size(); i++)
    {
      cout<<animals[i]<<endl;
    }
    
/* 
int *a=new int(10);
*a=120;
cout<<a;
Dog d1;
d1.show(); */



 /*    cout<<"Hello world"<<endl;
    cout<<"Hello universe"<<endl;
    cout<<"hello programming"<<endl; */

    return 0;
}
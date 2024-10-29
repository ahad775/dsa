#include<iostream>
using namespace std;


class A{
    private:
    int a=10;
    protected:
    int b=20;
    public:
    int c=40;

    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

    }
};

class B:protected A{

};


int main()
{
    B a;
   
}
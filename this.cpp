#include<iostream>
using namespace std;
class A{
    int a1;
    int a2;
    public:
    A(){
        a1=0;
        a2=0;
    }
    A(int a1,int a2){

        this->a1=a1;
        (*this).a2=a2;
    }
    void display(){
        cout<<"\n a1= "<<a1<<"\n a2= "<<a2;    
    }
};
int main(){
    A obj1,obj2(23,67);
    obj1.display();
    obj2.display();
    return 0;
}
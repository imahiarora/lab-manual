#include<iostream>
using namespace std;
class Person{
    string name;int age;
    public:
    Person(){
        cout<<"\n Person default constructor";name="default";age=18;
    }
    Person(string nm, int ag){
        cout<<"\n Person parametarized constructor";
    }
    void display(){
        cout<<"\n name = "<<name<<" \n age = "<<age;
    }
};
class Student:public Person{
    string rollno;
    public:
    Student(){
        cout<<"\n Student default constructor"; rollno="25csu000";
    }
    Student(string nm,int ag, string rno):Person(nm,ag){
        cout<<"\n Student parametarized";
        rollno=rno;
    }
    void display_student(){
        display();
        cout<<"\n Roll no. = "<<rollno;
    }
};
int main(){
    Student p1,p2("abcd",23,"25csu135");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;

}

#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int calculateTotal()//getter
    {
        return(marks1+marks2+marks3);
    }
    public:
    void inputDetails() //setter
    {
        cout<<"\nENTER ROLL NO.,NAME,MARKS1,MARKS2,MARKS3:"; 
    cin>>rollno>>name>>marks1>>marks2>>marks3;   }
    void displayDetails()//getter
    {
        cout<<"\n NAME: "<<name<<"\n ROLL NO.: "<<rollno;
        cout<<"\n MARKS 1:"<<marks1<<"\nmarks2:"<<marks2<<"\nmarks3:"<<marks3;
        cout<<"\n TOTAL: "<<calculateTotal();
    }

};
int main()
{
    Student s1; //s1 is the object/instance of the class student
    s1.inputDetails();
    s1.displayDetails();
    Student s2;
    s2.inputDetails();
    s2.displayDetails();
    return 0;
}

#include<iostream>
using namespace std;
class Course{
    int duration;
    string courseName,instructorName;
    public:
    Course(int m, string n,string p){
        duration=m;
        courseName=n;
        instructorName=p;
    }
    void displayDetails(){
        cout<<"\nDuration in weeks is : "<<duration;
        cout<<"\nCourse Name is : "<<courseName;
        cout<<"\nInstructor Name : "<<instructorName;
    }
    ~Course(){
        cout<<"\nthe object is deleted";
    }
};
int main(){
    Course c1(2,"PHYSICS","MR AHMED HUSSAIN");
    c1.displayDetails();
    return 0;
}

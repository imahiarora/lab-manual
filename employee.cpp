#include<iostream>
using namespace std;
class Employee{
int empId;
string name;
double monthlySalary;
double calculateAnnualSalary()
{
    return 12*monthlySalary;
}
public:
void inputDetails(){
    cout<<"\nEnter employee Id";
    cin>>empId;
    cout<<"\nEnter Name";
    getline(cin,name);
    cout<<"\nEnter monthly salary";
    cin>>monthlySalary;
}
void displayDetails()
{
    cout<<"\nEMPLOYEE ID:"<<empId;
    cout<<"\nName:"<<name;
    cout<<"\nMonthly Salary:"<<monthlySalary;
    cout<<"\nAnnual Salary is:"<<calculateAnnualSalary;
}
};
int main(){
    Employee e1;
    e1.inputDetails();
    e1.displayDetails();
return 0;
}
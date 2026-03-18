#include<iostream>
using namespace std;
void EMP(float basicsalary){
    float bonus,netsalary;
    cout<<"\nENTER BASIC SALARY :Rs ";
    cin>>basicsalary;
    bonus=0.12*basicsalary;
    netsalary=bonus+basicsalary;
    cout<<"\nNET SALARY FOR EACH EMPLOYEE IS : "<<netsalary;
}
int main(){
    int empnumber;
    cout<<"ENTER EMPLOYEE NUMBER : ";
    cin>>empnumber;
    for(int i=0;i<empnumber;i++){
        EMP(0);
    }
    return 0;
}
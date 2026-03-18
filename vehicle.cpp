#include<iostream>
using namespace std;
class Vehicle{
    public:
    string vehicleNo;
    int fee;
    string owner,vehicleType;
    Vehicle()//default constructor
    {
        owner="unknown";
        vehicleNo= "not assigned";
        vehicleType="general";
        fee=0;
    }
    Vehicle(string m, string n)//two parametarized 
    {
        owner=m;
        vehicleNo=n;
        vehicleType="general";
        fee=0;
    }
    Vehicle(string m, string n,string p, int q)//4 parametarized 
    {
        owner=m;
        vehicleNo=n;
        vehicleType=p;
        fee=q;
    }
       
    void displayDetails(){
        cout<<"\nOWNER NAME IS : "<<owner;
        cout<<"\nVEHICLE NUMBER IS : "<<vehicleNo;
        cout<<"\nVEHICLE TYPE IS : "<<vehicleType;
        cout<<"\nFEES IS : "<<fee;
    }
};
int main(){
    Vehicle v1,v2("MAHI","BH35US6534"),v3("khwaish","HR36BD2456","Scooter",450000);
    v1.displayDetails();
    v2.displayDetails();
    v3.displayDetails();
    return 0;
    
}
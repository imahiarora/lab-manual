#include<iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    int price,ram;
    void setDetails(string m){
        brand=m;
    }
    void setDetails(string m,int n){
        brand=m;
        price=n;
    }
    void setDetails(string m, int n, int p){
        brand=m;
        price=n;
        ram=p;
    }
    void displayDetails(){
        cout<<"\nBRAND NAME IS : "<<brand;
        cout<<"\nPRICE IS : "<<price;
        cout<<"\nRAM IS : "<<ram;
    }
};
int main(){
    Laptop l1,l2,l3;
    l1.setDetails("LENOVO");
    l1.displayDetails();
    l2.setDetails("HP",64000);
    l2.displayDetails();
    l3.setDetails("MACBOOK",71000,32);
    l3.displayDetails();
    return 0;
}
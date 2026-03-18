#include<iostream>
using namespace std;
class Mobile{
    public:
    string brand;
    float price,storage;
    Mobile(string m){
        brand=m;
    }
    Mobile(string m,float n){
        brand=m;
        price=n;
    }
    Mobile(string m,float n, float p){
        brand=m;
        price=n;
        storage=p;
    }
    void displaydetails(){
        cout<<"\nbrand name is : "<<brand;
        cout<<"\nprice of mobile in thousands is : "<<price;
        cout<<"\nstorage in the application is in gb : "<<storage;
    }
};
int main(){
    Mobile m1("Vivo"),m2("oppo",45.67),m3("apple",84,256);
    m1.displaydetails();
    m2.displaydetails();
    m3.displaydetails();
    return 0;
}
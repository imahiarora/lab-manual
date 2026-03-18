#include<iostream>
using namespace std;
class ElectricityBill{
   public:
   float rate,fixed;
   int units;
   void calculateBill(int units){
    cout<<"\nYour bill is : "<<units*5;
   }
void calculateBill(int units,float rate){
    cout<<"\nYour bill is : "<<units*rate;
}
void calculateBill(int units,float rate,float fixed){
    cout<<"\nYour bill is : "<<fixed+(units*rate);
}
};
int main (){
    ElectricityBill a1,a2,a3;
    a1.calculateBill(5);
    a2.calculateBill(5,3.4);
    a3.calculateBill(5,3.4,5.6);
    return 0;
}

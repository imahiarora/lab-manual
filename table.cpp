#include<iostream>
#include<string>
using namespace std;
class Table{
    int price;
    string material;
    int numberoflegs;
    public:
    Table();//default constructor
    Table(int ,string);//double parametarised constructor
    Table(int,string,int);//triple parametarised constructor
    void display();
};
Table::Table(){
    price=5000;
    material="Wood";
    numberoflegs=4;
}
Table::Table(int a,string b){
    price=a;
    material=b;
    numberoflegs=0;
}
Table::Table(int a,string b,int c){
    price=a;
    material=b;
    numberoflegs=c;
}
void Table::display(){
    cout<<"\ndetails of this table are";
    cout<<"\nprice is-"<<price;
    cout<<"\nmaterial is-"<<material;
    cout<<"\nnumber of legs per table are-"<<numberoflegs;
}
     int main(){
        Table t1,t2(6000,"steel"),t3(7000,"Wood",4);
        t1.display();
        t2.display();
        t3.display();
     }
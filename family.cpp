#include<iostream>
using namespace std;
class Rectangle{ 
    int length;
    int width;
    static int count;
    public:
    Rectangle(){
        length=0;width=0;count++;
    }
    Rectangle(int l,int r){
        length =l;
        width=r;
        count++;
    }
    void display(){
        cout<<"\n Length = "<<length;
        cout<<"\n Width = "<<width;
        cout<<"\n no. of objects created = "<<count;
    }
    friend void Area(Rectangle);
};
void Area(Rectangle obj){
    cout<<"\n Area = "<<obj.length*obj.width;
}
int Rectangle::count;
int main(){
    Rectangle r1;
     r1.display();
    Area(r1);
    Rectangle r2(23,45);
    r2.display();
    Area(r2);
    Rectangle r3;
    r3.display();
    return 0;
}
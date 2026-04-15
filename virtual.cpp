#include<iostream>
using namespace std;
class shape// shape becomes abstract class bcz it has one pure virtual method
{
    public:
    shape(){cout<<"\n shape default const called";}
    virtual void area()=0;//abstract class which mandates overridding
    virtual void display ()final //  final doesn't allow overridding
    {
        cout<<"\n we are 2 d shaped";
    }
};
class Rectangle:public shape{
    public:
    int length;int width;
    Rectangle(int l=5,int w=10):length(l),width(w)
    {
        cout<<"\n Rectangle object created";
    }
    void area(){
        cout<<"\n area="<<length*width;
    }
    void display_dim() const //constant function doesn't allow to change th values inside that function, u can't do l++
    {
        cout<<"\n length & width"<<length<<width;
    }
};
int main(){
    Rectangle r2(50,42);
    r2.display();
    r2.display_dim();

    return 0;
}
#include<iostream>
using namespace std;
class Rectangle{
    float length;
    float width;
    float calculateArea()
{
    return(length*width);
}
float calculatePerimeter()
{
    return(2*(length+width));
}
public:
    void inputDimensions()
    {
        cout<<"\n enter values for length and width";
        cin>>length>>width;
    }

void displayResult(){
    cout<<"\n length"<<length<<"\nwidth"<<width;
    cout<<"\nPERIMETER :"<<calculatePerimeter();
    cout<<"\n AREA: "<<calculateArea();
}
};
int main(){
    Rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}
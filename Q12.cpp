#include<iostream>
using namespace std;
int main(){

    int a,b,c;

    cout<<"enter three sides of a triangle:";
    cin>>a>>b>>c;

    if(a==b && b==c){
        cout << "triangle is equilateral";
    }

    else if (a==b||b==c||a==c){
        cout <<"triangle is isosceles";
    }
    else {
        cout<<"triangle is scalene";
    }
    return 0;


}
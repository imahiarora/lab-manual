#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter no of marks ";
    cin>>marks;

    if(marks>=90)
    cout<<"Grade A";
    else if(marks>=75)
    cout<<"Grade B";
    else if(marks>=60)
    cout<<"Grade C";
    else if(marks>=40)
    cout<<"Grade C";
    else 
    cout<< "fail";

    return 0;
}
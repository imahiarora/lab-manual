#include<iostream>
using namespace std;
int main(){
int n1,n2,n3,n4,n5;
float total,percentage;
cout<<"enetr the marks of 5 sub: ";
cin>>n1>>n2>>n3>>n4>>n5;
total = n1+n2+n3+n4+n5;
percentage = total/5;
cout<<"\n Total marks="<<total;
cout<<"\n Percentage of the marks = "<<percentage<<"%";
return 0;
}
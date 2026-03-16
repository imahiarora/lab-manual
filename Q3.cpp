#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"enter value for c and f";
    cin>>c>>f;
    float conv1=(c*1.8)+32;
    float conv2=(0.56)*(f-32);
    char choice;
    cout<<"enter your choice c or f?"<<choice;
    cin>>choice;
    switch(choice)
    {
case 'c':;
case 'C': cout<<" celsius to farenheit- "<<conv1;
break;
case 'f':;
case 'F': cout<<" farenheit to celcius "<<conv2;
break;
    }
return 0;

}
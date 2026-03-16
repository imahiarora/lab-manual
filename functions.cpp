#include<iostream>
using namespace std;
/*int sum(int a,int b){
    cout<<"int method";
    return a+b;
}
float sum(float a,float b){
    cout<<"float method";
    return a+b;
}
double sum(double a,double b){
    cout<<"double method";
    return a+b;
}
 int main(){
cout<<sum(5,10)<<endl;
cout<<sum(5.28f,10.28f)<<endl;
cout<<sum(5.2869,10.2859)<<endl;
return 0;
 }*/
  int result(int a,int b,int c=0,int d=0,int e=0){
    cout<<"result of the subjects\t";
    return a+b+c+d+e;
  }
  int main(){
    cout<<result(45,58)<<endl;
    cout<<result(57,68,95)<<endl;
    cout<<result(78,49,65,77)<<endl;
    cout<<result(47,69,84,56,75)<<endl;
    return 0;
  }
  /*void welcome(string="agent",string="");
  int main(){
    welcome();
    welcome("Mahi");
    welcome("Mahi","Arora");
  return 0;
  }
  void welcome(string fname,string lname) //forward referencing
  {
    cout<<"\n welcome "<<fname<<lname;
  }*/
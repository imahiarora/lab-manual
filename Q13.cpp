#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 float a,b,c,D;
 float root1,root2;
  
 cout<<"enter values of a,b,c:";
 cin>>a>>b>>c;

 D=b*b-4*a*c;
 if(D>=0)
 cout << "roots:"
 <<(-b+sqrt(D))/(2*a) << ","
 <<(-b-sqrt(D))/(2*a);

 else
 cout<<"no real rooots";
 return 0;
 

}
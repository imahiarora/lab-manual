#include<iostream>

using namespace std;


int main()

{

string s;

int u=0,l=0,d=0,sp=0;


cout<<"Enter the password :";

cin>>s;


for(int i = 0;i<s.length();i++){

if (s[i] >= 'A' && s[i] <= 'Z')

u = 1;


else if (s[i] >= 'a' && s[i] <= 'z')

l = 1;

else if (s[i]>='0' && s[i]<= '9')

d=1;


else 

sp=1;

}


if (u && l && d && sp)

cout<<"\nstrong passcode";


else

cout<<"\nweak passcode";


return 0;


}
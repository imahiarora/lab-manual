#include<iostream>

using namespace std;


int main(){

int temp[30];


cout<<"Emter the tem for 5 days\n";

for(int i=0;i<30;i++){

cin>>temp[i];

}

//for mintemp

int mintemp = temp[0];

for(int i = 1; i < 30; i++) {

if(temp[i] < mintemp) {

mintemp = temp[i];

}

}


// print result

cout << "Minimum temperature: " << mintemp;


return 0;
}
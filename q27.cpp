#include <iostream>

using namespace std;


int main() {

int a[10];


cout << "Enter 10 item prices:\n";


for (int i = 0; i < 10; i++) {

cin >> a[i];

}


int max = a[0];


for (int i = 1; i < 10; i++) {

if (a[i] > max)

max = a[i];

}


cout << "Maximum price = " << max;


return 0;

}
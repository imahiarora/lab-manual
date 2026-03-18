#include <iostream>

using namespace std;


int main() {

int a[5];

int even = 0, odd = 0;


cout << "Enter 5 numbers:\n";


for (int i = 0; i < 5; i++) {

cin >> a[i];


if (a[i] % 2 == 0)

even = even + a[i];

else

odd = odd + a[i];

}


cout << "Even sum = " << even << endl;

cout << "Odd sum = " << odd << endl;


return 0;

}
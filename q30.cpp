#include <iostream>

using namespace std;


int main() {

int salary[10];

int total = 0;

float avg;


cout << "Enter salary of 10 employees:\n";

for (int i = 0; i < 10; i++) {

cin >> salary[i];

total += salary[i];

}


avg = total / 10.0;



cout << "\nTotal Salary = " << total;

cout << "\nAverage Salary = " << avg ;


return 0;

}